/* 
 * File:   StringCounter.cpp
 * Author: bamorim
 * 
 * Created on 15 de Abril de 2012, 21:00
 */

#include "StringCounter.h"

StringCounter::StringCounter(std::string key) {
    this->key = key;
    this->count = 1;
}

StringCounter::StringCounter(const StringCounter& orig) {
}

StringCounter::~StringCounter() {
}

int StringCounter::getCount(){
    return this->count;
}

std::string StringCounter::getKey(){
    return this->key;
}

StringCounter StringCounter::operator ++(){
    this->count++;
    return *this;
}

bool StringCounter::operator <(StringCounter value){
    return this->key < value->key;
}