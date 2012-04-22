/* 
 * File:   MainApp.h
 * Author: igormq
 *
 * Created on April 17, 2012, 3:51 PM
 */

#ifndef MAINAPP_H
#define	MAINAPP_H

#include "wx/wx.h"
#include "wxTranslationHelper.h"

class MainApp : public wxApp {
 public:
    wxTranslationHelper * m_TranslationHelper;
    virtual bool OnInit();
    virtual int OnExit();
    bool SelectLanguage();
    void RecreateGUI();
};
DECLARE_APP(MainApp);
#endif	/* MAINAPP_H */

