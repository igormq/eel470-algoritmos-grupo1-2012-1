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
    this->key = orig.getKey();
    this->count = orig.getCount();
}

StringCounter::~StringCounter() {
}

int StringCounter::getCount() const {
    return this->count;
}

std::string StringCounter::getKey() const {
    return this->key;
}

StringCounter StringCounter::operator ++() {
    this->count++;
    return *this;
}

bool StringCounter::operator<(StringCounter sc) const {
    return this->key < sc.getKey();
}

bool StringCounter::operator ==(StringCounter sc) const{
    return this->key == sc.getKey();
}