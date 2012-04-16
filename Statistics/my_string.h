/* 
 * File:   string_statistics.h
 * Author: bamorim
 *
 * Created on 15 de Abril de 2012, 01:01
 */

#ifndef MY_STRING_H
#define	MY_STRING_H

#include<string>
#include<vector>

    class MyString {
    private:
        std::string value;
    public:
        MyString(const char*);
        virtual ~MyString();
        std::string getVal();
        bool toSafe();
        std::vector<std::string> getWords();
        MyString operator =(const char*);
        bool operator ==(const char*);
    };

#endif	/* MY_STRING_H */

