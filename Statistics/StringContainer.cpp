/* 
 * File:   StringContainer.cpp
 * Author: bamorim
 * 
 * Created on 16 de Abril de 2012, 19:39
 */

#include "StringContainer.h"
#include <algorithm>
#include <exception>
#include <string.h>
#include <iostream>
//Constructors and destructors;

StringContainer::StringContainer(std::string inStr = "\0",
                                 std::string inValidChars = DEFAULTVALID,
                                 std::string accents = DEFAULTACCENTS, 
                                 std::string noAccents = DEFAULTNOACCENTS) 
{
    try {
    /* Initialize variables*/
    this->m_ValidChars = inValidChars;
    this->m_Accents = accents;
    this->m_NoAccents = noAccents;
    this->countValidChars = this->m_ValidChars.length();
    this->countNoAccents = this->m_NoAccents.length();
    this->countAccents = this->m_Accents.length();
    /*End of initialization*/
    }
    catch (char *str) {
        throw str;
    }
    
    this->toSafe(inStr);
    
    while(!inStr.empty()) {
        std::string first = this->getFirstValidWord(inStr);
        if(first.empty())
            return;
        this->m_Strings.push_back(first);
    }
    
}

StringContainer::StringContainer(const StringContainer& orig) {
}

StringContainer::~StringContainer() {
}

StringContainer::StringContainer(std::string inStr) {
    StringContainer(inStr, DEFAULTVALID, DEFAULTACCENTS, DEFAULTNOACCENTS);
}


//Data retrieve

std::string StringContainer::getWord(int pos) const {
    return this->m_Strings[pos];
}

int StringContainer::getWordCount() const {
    return this->m_Strings.size();
}


//Helpers

/**
 * Verify if char is valid
 * @param inChar Char to verify
 * @return true if char is valid, otherwise return false
 */
bool StringContainer::charIsValid(char inChar) {
    for(unsigned i=0; i < this->countValidChars; i++)
        if(inChar = this->m_ValidChars[i]) return true;
    return false;
}

/**
 * 
 * @param str
 */
void StringContainer::toSafe(std::string & str) {
    unsigned int i, j;
    for(i = 0 ; i < str.length(); i++)
    {
        std::cout << i << std::endl;
        for(j = 0; j < this->countAccents; j++)
        {
            if(str[i] == this->m_Accents[j])
            {
                std::cout << '#'<<j<<'#' << std::endl;
                j = this->countAccents;
            }
        }
    }
    //To Lower Entire String
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

std::string StringContainer::getFirstValidWord(std::string & inStr) {
    
    while(!inStr.empty() && !this->charIsValid(inStr[0]))
        inStr.erase(0,1);
    
    std::string sOut;
    
    while(!inStr.empty() && this->charIsValid(inStr[0]))
    {
        sOut.push_back(inStr[0]);
        inStr.erase(0,1);
    }
    
    return sOut;
}