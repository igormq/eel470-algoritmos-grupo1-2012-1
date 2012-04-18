/* 
 * File:   main.cpp
 * Author: igormq
 *
 * Created on April 15, 2012, 12:50 AM
 */

#include <cstdlib>

#include "MainApp.h"
#include "MainFrame.h"
#include "wx/wx.h"

BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_MENU(ID_Quit, MainFrame::OnQuit)
    EVT_MENU(ID_About, MainFrame::OnAbout)
    EVT_MENU(ID_Open, MainFrame::OnOpen)
    EVT_MENU(ID_Clear, MainFrame::OnClear)
END_EVENT_TABLE()

IMPLEMENT_APP(MainApp)
        
        
        