/***************************************************************
 * Name:      wxHelloWorldMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXHELLOWORLDMAIN_H
#define WXHELLOWORLDMAIN_H

//(*Headers(wxHelloWorldFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class wxHelloWorldFrame: public wxFrame
{
    public:

        wxHelloWorldFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxHelloWorldFrame();

    private:

        //(*Handlers(wxHelloWorldFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxHelloWorldFrame)
        static const long ID_BUTTON1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxHelloWorldFrame)
        wxButton* Button1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXHELLOWORLDMAIN_H
