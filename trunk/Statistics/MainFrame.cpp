/* 
 * File:   MainFrame.cpp
 * Author: igormq
 * 
 * Created on April 17, 2012, 3:56 PM
 */

#include <wx-2.8/wx/string.h>

#include "wx/wx.h"
#include "wx/toolbar.h"
#include "wx/aboutdlg.h"
#include "wx/listbox.h"
#include <sstream>
#include <wx-2.8/wx/textctrl.h>
#include <wx-2.8/wx/gtk/textctrl.h>
#include "MainFrame.h"
#include "MainApp.h"

/**
 * GUI interface definitions
 * @param title Title of window
 * @param pos Start position
 * @param size Start size of window
 */
MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(NULL, -1, title, pos, size) {

    this->ss = new StringStatistics();
    this->fp = new FileProcessor(*ss);

    this->menuFile = new wxMenu();

    this->menuFile->Append(ID_Open, _("&Open\tCtrl-O"));
    this->menuFile->Append(ID_Clear, _("Clea&r\tCtrl-R"));
    this->menuFile->AppendSeparator();
    this->menuFile->Append(ID_Quit, _("E&xit\tALT-F4"));

    this->menuHelp = new wxMenu;
    this->menuHelp->Append(ID_Select_Language, _("&Language\tCtrl-L"));
    this->menuHelp->AppendSeparator();
    this->menuHelp->Append(ID_About, _("&About"));

    this->menuBar = new wxMenuBar();
    this->menuBar->Append(menuFile, _("&File"));
    this->menuBar->Append(menuHelp, _("&Help"));
    SetMenuBar(menuBar);

    this->textCtrl = new wxTextCtrl(this, wxID_ANY, wxT("Welcome to Statistics Calculator!\nTo start go to File->Open or just press Ctrl+O"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER | wxTE_MULTILINE | wxTE_READONLY);

    wxImage::AddHandler(new wxPNGHandler);

    wxBitmap openBitMap(_("./Images/open.png"), wxBITMAP_TYPE_PNG);
    wxBitmap clearBitMap(_("./Images/clear.png"), wxBITMAP_TYPE_PNG);
    wxBitmap exitBitMap(_("./Images/exit.png"), wxBITMAP_TYPE_PNG);
    wxBitmap aboutBitMap(_("./Images/about.png"), wxBITMAP_TYPE_PNG);

    this->toolBar = new wxToolBar(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL | wxNO_BORDER | wxTB_TEXT);
    this->toolBar->AddTool(ID_Open, openBitMap, wxT("Open File (Ctrl+O"), _("Open Long String"));
    this->toolBar->AddTool(ID_Clear, clearBitMap, _("Clear (Ctrl+R)"), _("Clear Long String"));
    this->toolBar->AddSeparator();
    this->toolBar->AddTool(ID_About, aboutBitMap, _("About"), _("About Long String"));
    this->toolBar->AddSeparator();
    this->toolBar->AddTool(ID_Quit, exitBitMap, _("Exit(ALT+F4)"), _("Exit Long String"));
    this->toolBar->Realize();

    SetToolBar(toolBar);

    CreateStatusBar();
    SetStatusText(_("Welcome to Statistics!"));
}

/**
 * Close Program
 * @param 
 */
void MainFrame::OnQuit(wxCommandEvent& WXUNUSED(event)) {
    delete this->ss;
    delete this->fp;
    Close(TRUE);
}

/**
 * Show About Dialog
 * @param event
 */
void MainFrame::OnAbout(wxCommandEvent& WXUNUSED(event)) {
    wxAboutDialogInfo info;
    //info.SetIcon();
    info.SetName(_("String Statistics"));
    info.SetVersion(_("1.0"));
    info.SetDescription(_("This program generate a statistics from strings."));
    info.SetCopyright(_("(C) 2012 - UFRJ - Departamento de Eletronica"));
    info.AddDeveloper(_("Igor Macedo Quintanilha"));
    info.AddDeveloper(_("Bernardo Dornellas Cysneiros Gomes de Amorim"));
    info.AddDeveloper(_("Roberto de Moura Estevao Filho"));
    info.AddDeveloper(_("Pedro Menezes Ribeiro de Sousa"));
    info.AddDeveloper(_("Luciano Vargas dos Santos"));
    info.AddDeveloper(_("Tiago Monnerat de Faria Lopes"));
    info.AddDeveloper(_("Mauricio Lamarao Mota"));
    info.AddDeveloper(_("Daniel Miceli"));
    info.AddDeveloper(_("Luis Fernando Mascarenhas Carneiro de Almeida"));
    info.AddDeveloper(_("Thais Correa da Silva"));
    info.AddDeveloper(_("Tatiana Sciammarella"));
    info.AddDeveloper(_("Daniel Pereira"));
    info.AddTranslator(_("Igor Macedo Quintanilha"));
    info.AddTranslator(_("Bernardo Dornellas Cysneiros Gomes de Amorim"));
    wxAboutBox(info);
}


/**
 * Open file with extension .txt
 * @param event
 */
void MainFrame::OnOpen(wxCommandEvent& WXUNUSED(event)) {
    wxFileDialog * openFileDialog = new wxFileDialog(this);
    openFileDialog->SetWildcard(_("TXT files (*.txt)|*.txt"));
    openFileDialog->SetMessage(_("Choose a file"));

    if (openFileDialog->ShowModal() == wxID_OK) {
        wxString fileName = openFileDialog->GetPath();
        this->fp->include(fileName);

        this->textCtrl->Clear();
        std::ostream stream(this->textCtrl);
        stream << *(this->ss);
    }
}

void MainFrame::OnClear(wxCommandEvent& WXUNUSED(event)) {
    if (wxMessageBox(_("Press OK if you want erase all data"),
            _("Are you sure?"),
            wxOK | wxCANCEL | wxICON_EXCLAMATION, this) == wxOK) {
        this->ss->resetStatistics();
        this->textCtrl->Clear();
    }


}

void MainFrame::OnSelectLanguage(wxCommandEvent& WXUNUSED(event)) {
    if(wxGetApp().SelectLanguage())
        Refresh();
}

