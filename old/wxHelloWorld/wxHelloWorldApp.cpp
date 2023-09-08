/***************************************************************
 * Name:      wxHelloWorldApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wxHelloWorldApp.h"

//(*AppHeaders
#include "wxHelloWorldMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxHelloWorldApp);

bool wxHelloWorldApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxHelloWorldFrame* Frame = new wxHelloWorldFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
