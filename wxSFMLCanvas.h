#pragma once

#include "wx\wx.h"
#include "SFML\Graphics.hpp"

class wxSFMLCanvas : public wxControl, public sf::RenderWindow
{
public:

    wxSFMLCanvas(wxWindow* Parent = NULL, wxWindowID Id = -1, const wxPoint& Position = wxDefaultPosition,
        const wxSize& Size = wxDefaultSize, long Style = 0);
    virtual ~wxSFMLCanvas();

private:
    virtual void OnUpdate();
    void OnIdle(wxIdleEvent&);
    void OnPaint(wxPaintEvent&);
    void OnEraseBackground(wxEraseEvent&);
};