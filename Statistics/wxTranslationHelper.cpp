/* 
 * File:   wxTranslationHelper.cpp
 * Author: igormq
 * 
 * Created on April 21, 2012, 11:09 PM
 */

#include "wxTranslationHelper.h"
#include <wx/dir.h>
#include <wx/config.h>
#include <wx/filename.h>

wxTranslationHelper::wxTranslationHelper(wxApp & app)
: m_App(app), m_Locale(NULL) {
    Load();
}

wxTranslationHelper::~wxTranslationHelper() {
    Save();
    if (m_Locale) {
        wxDELETE(m_Locale);
    }
}

wxLocale * wxTranslationHelper::GetLocale() {
    return m_Locale;
}

bool wxTranslationHelper::Load() {
    wxConfig config(m_App.GetAppName());
    long language;
    if (!config.Read(wxT("wxTranslation_Language"),
            &language, wxLANGUAGE_UNKNOWN)) {
        language = wxLANGUAGE_UNKNOWN;
    }
    if (language == wxLANGUAGE_UNKNOWN) return false;
    wxArrayString names;
    wxArrayLong identifiers;
    GetInstalledLanguages(names, identifiers);
    for (size_t i = 0; i < identifiers.Count(); i++) {
        if (identifiers[i] == language) {
            if (m_Locale) wxDELETE(m_Locale);
            m_Locale = new wxLocale;
            m_Locale->Init(identifiers[i]);
            m_Locale->AddCatalogLookupPathPrefix(wxPathOnly(m_App.argv[0]) + wxFileName::GetPathSeparator() + wxT("Language"));
            m_Locale->AddCatalog(m_App.GetAppName());
#ifdef __WXGTK__
            m_Locale->AddCatalogLookupPathPrefix(wxPathOnly(wxT("./")) + wxFileName::GetPathSeparator() + wxT("Language"));
#endif

            return true;
        }
    }
    return false;
}

void wxTranslationHelper::Save(bool bReset) {
    wxConfig config(m_App.GetAppName());
    long language = wxLANGUAGE_UNKNOWN;
    if (!bReset) {
        if (m_Locale) {
            language = m_Locale->GetLanguage();
        }
    }
    config.Write(wxT("wxTranslation_Language"), language);
    config.Flush();
}

void wxTranslationHelper::GetInstalledLanguages(wxArrayString & names,
        wxArrayLong & identifiers) {
    names.Clear();
    identifiers.Clear();
    wxDir dir(wxPathOnly(m_App.argv[0]) + wxFileName::GetPathSeparator() + wxT("Language"));
    wxString filename;
    const wxLanguageInfo * langinfo;
    wxString name = wxLocale::GetLanguageName(wxLANGUAGE_DEFAULT);
    if (!name.IsEmpty()) {
        names.Add(name);
        identifiers.Add(wxLANGUAGE_DEFAULT);
    }
    for (bool cont = dir.GetFirst(&filename, wxT(""), wxDIR_DIRS);
            cont; cont = dir.GetNext(&filename)) {
        wxLogTrace(wxTraceMask(),
                _("wxTranslationHelper: Directory found = \"%s\""),
                filename.GetData());
        langinfo = wxLocale::FindLanguageInfo(filename);
        if (langinfo != NULL) {
            if (wxFileExists(dir.GetName() + wxFileName::GetPathSeparator() +
                    filename + wxFileName::GetPathSeparator() +
                    m_App.GetAppName() + wxT(".mo"))) {
                names.Add(langinfo->Description);
                identifiers.Add(langinfo->Language);
            }
        }
    }
}

bool wxTranslationHelper::AskUserForLanguage(wxArrayString & names,
        wxArrayLong & identifiers) {
    wxCHECK_MSG(names.Count() == identifiers.Count(), false,
            _("Array of language names and identifiers should have the same size."));
    long index = wxGetSingleChoiceIndex(_("Select the language"),
            _("Language"), names);
    if (index != -1) {
        if (m_Locale) {
            wxDELETE(m_Locale);
        }
        m_Locale = new wxLocale;
        m_Locale->Init(identifiers[index]);
        m_Locale->AddCatalogLookupPathPrefix(wxPathOnly(m_App.argv[0]) + wxFileName::GetPathSeparator() + wxT("Language"));
#ifdef __WXGTK__
        m_Locale->AddCatalogLookupPathPrefix(wxPathOnly(wxT("./")) + wxFileName::GetPathSeparator() + wxT("Language"));
#endif
        wxLogTrace(wxTraceMask(),
                _("wxTranslationHelper: Path Prefix = \"%s\""),
                wxPathOnly(m_App.argv[0]).GetData());
        m_Locale->AddCatalog(m_App.GetAppName());
        wxLogTrace(wxTraceMask(),
                _("wxTranslationHelper: Catalog Name = \"%s\""),
                m_App.GetAppName().GetData());
        return true;
    }
    return false;

}