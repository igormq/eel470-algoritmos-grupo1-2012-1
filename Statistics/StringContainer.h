/* 
 * File:   StringContainer.h
 * Author: bamorim
 *
 * Created on 16 de Abril de 2012, 19:39
 */

#ifndef STRINGCONTAINER_H
#define	STRINGCONTAINER_H

//#define DEFAULTVALID "abcdefghijklmnopqrstuvwxyz"\
//                          "ABCDEFGHIJKLMNOPQRSTUVWXYZ"\
//                          "0123456789"
#define DEFAULTVALID "abcdefghijklmnopqrstuvwxyz"\
                          "0123456789"
#define DEFAULTACCENTS "áéíóúàèìòùãẽĩõũâêîôûäëïöü"\
                       "ÁÉÍÓÚÀÈÌÒÙÃẼĨÕŨÂÊÎÔÛÄËÏÖÜ"\
                       "çÇàèìòù"
#define DEFAULTNOACCENTS "aeiouaeiouaeiouaeiouaeiou"\
                         "aeiouaeiouaeiouaeiouaeiou"\
                         "ccaeiou"

#include <string>
#include <deque>

class StringContainer {
public:
    StringContainer(std::string inStr = "",
                                 std::string inValidChars = DEFAULTVALID,
                                 std::string accents = DEFAULTACCENTS, 
                                 std::string noAccents = DEFAULTNOACCENTS) ;
    StringContainer(const StringContainer& orig);
    virtual ~StringContainer();

    //Data retrieve
    std::string getWord(int) const;
    int getWordCount() const;

    void toSafe(std::string &);
    //Helpers
    bool charIsValid(char);
    std::string getFirstValidWord(std::string &);
    
private:
    std::string m_ValidChars;
    std::string m_Accents;
    std::string m_NoAccents;
    int countValidChars, countAccents, countNoAccents;
    std::deque<std::string> m_Strings;
};

#endif	/* STRINGCONTAINER_H */

