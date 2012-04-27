/* 
 * File:   Statistics.h
 * Author: bamorim
 *
 * Created on 15 de Abril de 2012, 20:57
 */

#ifndef STATISTICS_H
#define	STATISTICS_H

#include <string>
#include <set>
#include <sstream>
#include "StringCounter.h"

class StringStatistics {
    std::set<StringCounter> data;
public:
    StringStatistics();
    StringStatistics(const StringStatistics& orig);
    virtual ~StringStatistics();
    void add(std::string);
    bool resetStatistics();
    std::set<StringCounter> getData() const;
    int countAll() const;
    friend std::ostream& operator <<(std::ostream &os,const StringStatistics &obj);
};

#endif	/* STATISTICS_H */
