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
    int count;
    std::string key;
public:
    StringCounter(std::string);
    StringCounter(const StringCounter& orig);
    virtual ~StringCounter();
    int getCount() const;
    std::string getKey() const;
    StringCounter operator+=(StringCounter);
    bool operator<(StringCounter) const;
    bool operator==(StringCounter) const;
};

#endif	/* STRINGCOUNTER_H */