/* 
 * File:   FileProcessor.cpp
 * Author: bamorim
 * 
 * Created on 17 de Abril de 2012, 13:48
 */

#include "FileProcessor.h"
FileProcessor::FileProcessor(StringStatistics & ss) {
    this->m_ss = ss;
}

FileProcessor::FileProcessor(const FileProcessor& orig) {
}

FileProcessor::~FileProcessor() {
}

bool FileProcessor::include(std::string path) {
    std::ifstream file;
    file.open(path);
    if (!file)
        return false;

    std::string currLine;

    while (true) {
        file >> currLine;
        if (file.eof() && currLine == "" )
            break;
        
        StringContainer sc(currLine);
        for (int i = 0; i < sc.getWordCount(); i++)
            this->m_ss.add(sc.getWord(i));
    }
}