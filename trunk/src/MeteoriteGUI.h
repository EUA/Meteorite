///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 17 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MeteoriteGUI__
#define __MeteoriteGUI__

#include <wx/gauge.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MeteoriteGUI
///////////////////////////////////////////////////////////////////////////////
class MeteoriteGUI : public wxDialog 
{
	private:
	
	protected:
		wxGauge* m_gauge;
		wxStaticText* m_staticText;
		wxStaticBitmap* m_bitmap_logo;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ){ event.Skip(); }
		virtual void OnMouseRight( wxMouseEvent& event ){ event.Skip(); }
		
	
	public:
		MeteoriteGUI( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MeteoriteGUI"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~MeteoriteGUI();
	
};

#endif //__MeteoriteGUI__
