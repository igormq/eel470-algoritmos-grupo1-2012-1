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

    class MyString : public std::string {
    public:
        bool toSafe();
        std::vector<MyString> getWords();
    };

#endif	/* MY_STRING_H */

