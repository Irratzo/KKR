#pragma once

#define wxNEEDS_DECL_BEFORE_TEMPLATE

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "Options.h"

class OptionsFrame : public wxDialog
{
public:
	OptionsFrame(const wxString& title, wxWindow* parent = NULL);

	Options options;
	void CreateControls();

	bool TransferDataFromWindow() override;
};

