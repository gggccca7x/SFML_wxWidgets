#pragma once

#include "wx\wx.h"
#include "MyCanvas.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

	wxButton* m_btn1 = nullptr;
	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;
	MyCanvas* my_canvas = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};
