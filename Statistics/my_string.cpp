/* 
 * File:   string_statistics.h
 * Author: bamorim
 *
 * Created on 15 de Abril de 2012, 01:01
 */

#include "my_string.h"

MyString::MyString(const char* value){
    this->value = value;
}

MyString::~MyString(){
    
}

std::string MyString::getVal(){
    return this->value;
}

bool MyString::toSafe(){
    
}

std::vector<std::string> MyString::getWords(){
    
}

MyString MyString::operator =(const char *value){
    this->value = value;
    return *this;
}

bool MyString::operator ==(const char *value){
    std::string compare = value;
    return (this->value == compare);
}