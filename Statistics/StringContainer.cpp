/* 
 * File:   StringContainer.cpp
 * Author: bamorim
 * 
 * Created on 16 de Abril de 2012, 19:39
 */

#include "StringContainer.h"

//Constructors and destructors;

StringContainer::StringContainer(std::string inStr,
        char * inValidChars = DEFAULTVALID) {
}

StringContainer::StringContainer(const StringContainer& orig) {
}

StringContainer::~StringContainer() {
}


//Data retrieve

std::string StringContainer::getWord(int pos) const {
    return this->m_Strings[pos];
}

int StringContainer::getWordCount() const {
    return this->m_Strings.size();
}


//Helpers

bool StringContainer::charIsValid(char inChar) {

}

std::string StringContainer::getFirstValidWord(std::string & inStr) {

}