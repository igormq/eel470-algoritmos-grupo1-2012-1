/* 
 * File:   MainApp.cpp
 * Author: igormq
 * 
 * Created on April 17, 2012, 3:51 PM
 */

#include "MainApp.h"
#include "MainFrame.h"
#include "wx/wx.h"

/**
 * Main App call GUI interface
 * @return 
 */
bool MainApp::OnInit() {
    SetAppName(_("statistics"));
    m_TranslationHelper = new wxTranslationHelper(*this);
    this->RecreateGUI();
    return true;
}

int MainApp::OnExit() {
    if (this->m_TranslationHelper) {
        wxDELETE(this->m_TranslationHelper);
    }
    return 0;
}

bool MainApp::SelectLanguage() {
    wxArrayString names;
    wxArrayLong identifiers;
    this->m_TranslationHelper->GetInstalledLanguages(names, identifiers);
    return this->m_TranslationHelper->AskUserForLanguage(names, identifiers);
}

void MainApp::RecreateGUI() {
    wxWindow * topwindow = GetTopWindow();
    if (topwindow) {
        SetTopWindow(NULL);
        topwindow->Destroy();
    }
    MainFrame *frame = new MainFrame(_("Statistics"), wxPoint(50, 50),
            wxSize(450, 340));

    frame->Maximize(true);
    SetTopWindow(frame);
    frame->Center();
    frame->Show(true);

}