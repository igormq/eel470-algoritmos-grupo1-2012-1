/* 
 * File:   StringCounter.h
 * Author: bamorim
 *
 * Created on 15 de Abril de 2012, 21:00
 */

#ifndef STRINGCOUNTER_H
#define	STRINGCOUNTER_H

#include <string>

class StringCounter {
public:
    StringCounter(std::string);
    StringCounter(const StringCounter& orig);
    virtual ~StringCounter();
    int getCount();
    std::string getKey();
    StringCounter operator++();
    bool operator<(StringCounter);
private:
    int count;
    std::string key;
};

#endif	/* STRINGCOUNTER_H */