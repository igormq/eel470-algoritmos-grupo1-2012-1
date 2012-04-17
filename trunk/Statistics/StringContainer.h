/* 
 * File:   StringContainer.h
 * Author: bamorim
 *
 * Created on 16 de Abril de 2012, 19:39
 */

#ifndef STRINGCONTAINER_H
#define	STRINGCONTAINER_H

#define DEFAULTVALID "abcdefghijklmnopqrstuvwxyz"\
                          "ABCDEFGHIJKLMNOPQRSTUVWXYZ"\
                          "0123456789"

#include <string>
#include <deque>

class StringContainer {
    std::deque<std::string> m_Strings;
    char* m_ValidChars;
public:
    StringContainer(std::string, char*);
    StringContainer(const StringContainer& orig);
    virtual ~StringContainer();

    //Data retrieve
    std::string getWord(int) const;
    int getWordCount() const;

    //Helpers
    bool charIsValid(char);
    std::string getFirstValidWord(std::string &);
};

#endif	/* STRINGCONTAINER_H */

