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
4. Add SFML lib
5. Add code and create custom wxWidget (Code in project)

### Prerequisits
* Download and Install Visual Studio, SFML and wxWidgets

### 1. Build wxWidgets from source
Process can be found on "javidx9"'s youtube video
Navigate in the folder system to (wxWidgets)\build\msw\wx_vc16.sln, and open it in Visual Studio.

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/wxWidFolder.PNG)

In Visual Studio, navigate to Build -> Batch Build -> Select All -> Build

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/build_wxwid.PNG)

Add environment variable for wxWidget. System Properites -> Environment Variables -> New (system variable) -> Name: WXWIN Value: Filepath

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/environment_variable.PNG)

### 2. Create windows desktop application

Open new instance of Visual Studio and create a windows desktop application

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/windows_application.PNG)

Delete everything in the Header/Resource/Source Folders

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/delete_files.PNG)

### 3. Add wxWidgets lib

* Right click Applicaton name in Solution explorer -> Properties. At the top, ensure Configuration is set to "All Configurations", and the Platform is "x64".
* Under C/C++ -> General section, set Additional Include Directories: $(WXWIN)\include;$(WXWIN)\include\msvc;
* In the Linker options, Additional Library Directories: $(WXWIN)\lib\vc_lib

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/wx_win_settings.PNG)

### 4. Add SFML lib

Put SFML's bin, include and lib folders into <Application>\sfml folder.

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/sfml_folder.PNG)

Note: This can all be found in the SFML tutorial video linked above.
  
* Back in properties, right click application name in Solution explorer -> Properties. Ensure again it's for All configurations and x64.
* In the Linker general options, Additional Library Directories: <Application Location>\SFML_wxWidgets_Integration\sfml\lib e.g. D:\repos\SFML_wxWidgets_Integration\sfml\lib
* In Linker tab, open Input section. With "Debug" selected, set Additional Dependencies: sfml-system-d.lib;sfml-graphics-d.lib;sfml-audio-d.lib;sfml-network-d.lib;sfml-window-d.lib;%(AdditionalDependencies)
* Then change debug to "Release" set Additional Dependencies: sfml-system.lib;sfml-graphics.lib;sfml-audio.lib;sfml-network.lib;sfml-window.lib;%(AdditionalDependencies)
* In the C/C++ General section, add to the Additional Include Directories: <Application Location>\sfml\include e.g. D:\repos\SFML_wxWidgets_Integration\sfml\include. Note: Make sure it's for All Configurations and do not delete the WXWIN includes.

![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/sfml_includes.PNG)

Locate the <ApplicationLocation>\sfml\bin folder in the folder system. Copy openal32.dll and all the files that have -d-2.dll at the end (every other one) and paste them all in <ApplicationLocation>\Debug folder.
  
![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/debug_folder.PNG)
  
### 5. Add code and create custom wxWidget (All provided)
  
Download the .h and .cpp files provided in the repository, and include them to the project's Header and Source Files folders respectively.
  
![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/files.PNG) 

### Final Solution

Run the Application, ensure you are running x64 and not x86. Click the "Click Me" button, and you should see the SFML code draw a blue circle.
  
![](https://github.com/gggccca7x/SFML_wxWidgets/blob/main/readme_images/final_solution.PNG) 
