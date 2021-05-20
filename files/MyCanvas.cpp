#include "MyCanvas.h"

MyCanvas::MyCanvas(wxWindow* Parent, wxWindowID Id, wxPoint& Position, wxSize& Size, long Style)
    : wxSFMLCanvas(Parent, Id, Position, Size, Style)
{
}

void MyCanvas::OnUpdate()
{
    // Clear the view
    clear(sf::Color(0, 128, 128));

    // Display the circle in the view

}
