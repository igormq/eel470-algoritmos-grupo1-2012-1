/* 
 * File:   MainApp.cpp
 * Author: igormq
 * 
 * Created on April 17, 2012, 3:51 PM
 */

#include "MainApp.h"
#include "MainFrame.h"
#include "wx/wx.h"

bool MainApp::OnInit() {
    MainFrame *frame = new MainFrame( _("Statistics"), wxPoint(50, 50),
                                  wxSize(450,340) );
    
    frame->Maximize(true);
    frame->Show(true);

    SetTopWindow(frame);
    return true;
}

