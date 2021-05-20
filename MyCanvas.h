#pragma once

#include "wxSFMLCanvas.h"

class MyCanvas : public wxSFMLCanvas
{
public:

    MyCanvas(wxWindow* Parent,
        wxWindowID Id,
        wxPoint& Position,
        wxSize& Size,
        long Style = 0);

private:

    virtual void OnUpdate();
};
