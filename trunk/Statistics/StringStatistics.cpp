/* 
 * File:   Statistics.cpp
 * Author: bamorim
 * 
 * Created on 15 de Abril de 2012, 20:57
 */

#include "StringStatistics.h"

StringStatistics::StringStatistics(){
    
}

StringStatistics::StringStatistics(const StringStatistics& orig) {
    this->data = orig.getData();
}

StringStatistics::~StringStatistics() {
}


/**This method will verify if there is already a string on the statistic,
 *increasing the counter. If there isn't, will insert a new object to 
 *the statistic.
 * @param inStr, the string that will iterate to the statistics
 */
void StringStatistics::add(std::string inStr){
    bool found = false;
    std::set<StringCounter>::iterator it;
    
    for ( it=this->data.begin() ; it != this->data.end(); it++ ){
        if(*it==inStr){
            *it++;
            found=true;
        } 
    }
    
    if(!found){
        StringCounter temp (inStr);
        this->data.insert(temp);        
    }
    
       
}
/**
 *All the elements in the set container are dropped, 
 *@params 
 *@return true if the set was really cleared
*/
bool StringStatistics::resetStatistics(){
    this->data.clear();
    //Checks if it's really empty.
    return this->data.empty();
}

std::set<StringCounter> StringStatistics::getData() const{
    return this->data;
}

std::stringstream StringStatistics::echo() const {
    std::stringstream buffer;
    std::set<StringCounter>::iterator it;
    for ( it=this->data.begin() ; it != this->data.end(); it++ ){
        buffer << it->getKey() << ": " << it->getCount() << std::endl;
    }
    return buffer;
}