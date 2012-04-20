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
#include "StringStatistics.h"

class FileProcessor {
    StringStatistics * m_ss;
public:
    FileProcessor(StringStatistics & ss);
    FileProcessor(const FileProcessor& orig);
    virtual ~FileProcessor();
    bool include(std::string path);
};

#endif	/* FILEPROCESSOR_H */

