/* 
 * File:   wxTranslationHelper.h
 * Author: igormq
 *
 * Created on April 21, 2012, 11:09 PM
 */

#ifndef WXTRANSLATIONHELPER_H
#define	WXTRANSLATIONHELPER_H

#include "wx/wx.h"
#include "wx/intl.h"

class wxTranslationHelper {
    wxApp & m_App;
    wxLocale * m_Locale;
public:
    wxTranslationHelper(wxApp & app);
    virtual ~wxTranslationHelper();
    wxLocale * GetLocale();
    void GetInstalledLanguages(wxArrayString &name, wxArrayLong &identifiers);
    bool AskUserForLanguage(wxArrayString &names, wxArrayLong &identifiers);
    bool Load();
    void Save(bool bReset = false);
private:

};

#endif	/* WXTRANSLATIONHELPER_H */

