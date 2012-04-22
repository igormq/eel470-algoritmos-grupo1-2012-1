/* 
 * File:   StringCounter.cpp
 * Author: bamorim
 * 
 * Created on 15 de Abril de 2012, 21:00
 */

#include "StringCounter.h"

/**
 * Constructor
 * @param std::string key unique identifier
 */
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

/**
 * Method that returns the number of occurrences of key
 * @return Count
 */
int StringCounter::getCount() const {
    return this->count;
}

/**
 * Method that returns the unique identifier of StringCounter
 * @return key
 */
std::string StringCounter::getKey() const {
    return this->key;
}

/**
 * Operator that increases the number of ocurrences
 * @param sc
 * @return 
 */
StringCounter StringCounter::operator +=(StringCounter sc) {
    this->count += sc.getCount();
    return *this;
}

/**
 * To use the class in a set
 * @param sc
 * @return true if this key is less then sc key
 */
bool StringCounter::operator<(StringCounter sc) const {
    return this->key < sc.getKey();
}

/**
 * Verifies if the keys are equal
 * @param sc StringCounter object to compare
 * @return true if the keys are equal
 */
bool StringCounter::operator ==(StringCounter sc) const{
    return this->key == sc.getKey();
}