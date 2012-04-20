/* 
 * File:   FileProcessor.cpp
 * Author: bamorim
 * 
 * Created on 17 de Abril de 2012, 13:48
 */

#include <istream>
#include <bits/stl_pair.h>

#include "FileProcessor.h"

FileProcessor::FileProcessor() {
//    this->stringStatistics = new StringStatistics();
}

FileProcessor::FileProcessor(const FileProcessor& orig) {
}

FileProcessor::~FileProcessor() {
}

void FileProcessor::addFile(const string & filePath) {
    this->fileQueue.push_back(filePath);
}

map<string,int> FileProcessor::getStatistics() const{
    
}