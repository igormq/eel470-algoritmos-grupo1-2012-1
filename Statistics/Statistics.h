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
#include "StringCounter.h"

class Statistics {
public:
    Statistics();
    Statistics(const Statistics& orig);
    virtual ~Statistics();
    bool addOccurrence(std::string);
    bool resetStatistics();
    bool addText(std::string);
    std::set<StringCounter> getData();
private:
    std::set<StringCounter> data;
};

#endif	/* STATISTICS_H */

