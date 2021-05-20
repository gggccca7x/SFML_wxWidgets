#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "blah title", wxPoint(30, 30), wxSize(800, 600))
{
	m_btn1 = new wxButton(this, 10001, "Click me", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));
	wxPoint point = wxPoint(380, 50);
	wxSize size = wxSize(250, 250);
	my_canvas = new MyCanvas(this, wxID_ANY, point, size);
}

cMain::~cMain()
{
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	m_list1->AppendString(m_txt1->GetValue());

	sf::CircleShape circ(50.0f);
	circ.setOrigin(50.0f, 50.0f);
	circ.setFillColor(sf::Color::Blue);
	circ.setPosition(125, 125);
	my_canvas->draw(circ);
	my_canvas->display();
	evt.Skip();
}
