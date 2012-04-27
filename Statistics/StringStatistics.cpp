/* 
 * File:   Statistics.cpp
 * Author: bamorim
 * 
 * Created on 15 de Abril de 2012, 20:57
 */

#include "StringStatistics.h"
#include <iomanip>

StringStatistics::StringStatistics() {

}

StringStatistics::StringStatistics(const StringStatistics& orig) {
    this->data = orig.getData();
}

StringStatistics::~StringStatistics() {
}

/**
 *This method will verify if there is already a string on the statistic,
 *increasing the counter. If there isn't, will insert a new object to 
 *the statistic.
 * @param inStr the string that will iterate to the statistics
 */
void StringStatistics::add(std::string inStr) {
    bool found = false;
    std::set<StringCounter>::iterator it;

    StringCounter temp(inStr);
    it = this->data.find(temp);

    if (it != this->data.end()) {
        temp += (*it);
        this->data.erase(it);
    }
    this->data.insert(temp);


}

/**
 *All the elements in the set container are dropped, 
 *@params 
 *@return true if the set was really cleared
 */
bool StringStatistics::resetStatistics() {
    this->data.clear();
    //Checks if it's really empty.
    return this->data.empty();
}

std::set<StringCounter> StringStatistics::getData() const {
    return this->data;
}

/**
 * Count all words
 * @return count of all words
 */
int StringStatistics::countAll() const {
    std::set<StringCounter>::iterator it;
    std::set<StringCounter> data = this->getData();
    int count = 0;
    for (it = data.begin(); it != data.end(); it++)
        count += it->getCount();
    return count;
}

/**
 * Generate a pretty output of data
 * @param os
 * @param obj
 * @return std::ostream
 */
std::ostream& operator<<(std::ostream &os, const StringStatistics &obj) {
    std::set<StringCounter> data = obj.getData();
    std::set<StringCounter>::iterator it;
    int countAll = obj.countAll();
    for (it = data.begin(); it != data.end(); it++) {
        os << it->getKey() << ": " << it->getCount() << " : " << std::setiosflags(std::ios::fixed)  << std::setprecision(2) << 100 * it->getCount() / (float) countAll << "%" << std::endl;
    }
    return os;
}