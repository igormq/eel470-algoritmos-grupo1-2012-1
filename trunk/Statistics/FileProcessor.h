/* 
 * File:   FileProcessor.h
 * Author: bamorim
 *
 * Created on 17 de Abril de 2012, 13:48
 */

#ifndef FILEPROCESSOR_H
#define	FILEPROCESSOR_H

#include <string>
#include <fstream>
#include <deque>
#include <map>

#include "StringContainer.h"
#include "StringCounter.h"
#include "StringStatistics.h"

using namespace std;

class FileProcessor {
public:
    FileProcessor();
    FileProcessor(const FileProcessor& orig);
    virtual ~FileProcessor();
    void addFile(const string &);
    map<string, int> getStatistics() const;
private:
    deque<string> fileQueue;
    StringStatistics stringStatistics;
    
};

#endif	/* FILEPROCESSOR_H */

