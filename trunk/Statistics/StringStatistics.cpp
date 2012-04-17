/* 
 * File:   Statistics.cpp
 * Author: bamorim
 * 
 * Created on 15 de Abril de 2012, 20:57
 */

#include "StringStatistics.h"

StringStatistics::StringStatistics() {
}

StringStatistics::StringStatistics(const StringStatistics& orig) {
    this->data = orig.getData();
}

StringStatistics::~StringStatistics() {
}

bool StringStatistics::add(std::string){
    
}

bool StringStatistics::resetStatistics(){
    
}

std::set<StringCounter> StringStatistics::getData() const{
    return this->data;
}