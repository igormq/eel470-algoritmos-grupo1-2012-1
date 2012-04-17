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
#include "StringContainer.h"
#include "StringCounter.h"
#include "StringStatistics.h"

class FileProcessor {
    std::string path;
public:
    FileProcessor(std::string);
    FileProcessor(const FileProcessor& orig);
    virtual ~FileProcessor();
    void addToStatistics(StringStatistics &);
};

#endif	/* FILEPROCESSOR_H */

