# Integrating SFML and wxWidgets to work together - Windows 10, 2021

A project on how I set up a 64bit wxWidgets application where you can embed an SFML canvas into the applcation.
### Software versions:
* Visual Studio 2019 https://docs.microsoft.com/en-us/visualstudio/install/install-visual-studio?view=vs-2019
* wxWidgets 3.1.5 https://www.wxwidgets.org/downloads/
* SFML 2.5.1 for Visual C++ 15 (64 bit) https://www.sfml-dev.org/download/sfml/2.5.1/

### Resources Used:
* https://www.youtube.com/watch?v=FOIbK4bJKS8&ab_channel=javidx9javidx9
* https://www.youtube.com/watch?v=axIgxBQVBg0&ab_channel=HilzeVonck
* https://www.sfml-dev.org/tutorials/1.6/graphics-wxwidgets.php
* https://stackoverflow.com/questions/67163036/how-to-use-wxwidgets-with-sfml

### Steps:
1. Build wxWidgets from source
2. Create windows desktop application
3. Add wxWidgets lib
4. Create wxWidget application
5. Add SFML lib
6. Create custom wxWidget

### Prerequisits
* Download and Install Visual Studio, SFML and wxWidgets

### 1. Build wxWidgets from source
Process can be found on "javidx9"'s youtube video
Navigate in the folder system to (wxWidgets)\build\msw\wx_vc16.sln, and open it in Visual Studio.
![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/wxWidFolder.PNG)
In Visual Studio, navigate to Build -> Batch Build -> Select All -> Build
Add environment variable
