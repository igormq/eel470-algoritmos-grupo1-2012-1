/* 
 * File:   FileProcessor.cpp
 * Author: bamorim
 * 
 * Created on 17 de Abril de 2012, 13:48
 */

#include <wx-2.8/wx/string.h>

#include "FileProcessor.h"
FileProcessor::FileProcessor(StringStatistics & ss) {
    this->m_ss = &ss;
}

FileProcessor::FileProcessor(const FileProcessor& orig) {
}

FileProcessor::~FileProcessor() {
}

/**
 * Open a file to read it lines, for each line uses StringContainer 
 * to get words and then put into StringStatistics
 * @param path The path of the file.
 * @return False if cannot open file.
 */
bool FileProcessor::include(wxString path) {
    std::ifstream file;
    file.open(std::string(path.mb_str()).c_str());
    if (!file)
        return false;

    std::string currLine;

    while (true) {
        file >> currLine;
        if (file.eof() && currLine == "" )
            break;
        
        StringContainer sc(currLine);
        for (int i = 0; i < sc.getWordCount(); i++)
            this->m_ss->add(sc.getWord(i));
    }
    return true;
}