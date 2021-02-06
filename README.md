# UT Computer Science README

This README describes my intro with C++ using the UTK COSC 102 book

This project was created on a Windows 10 Machine
- Microsoft Windows 10 Home
- 10.0.19042 Build 19042

## TOC
1. Directory Structure
1. Tools Used
1. Building
1. FAQs
1. Errors Encountered
1. Book Information
1. Author Information
1. Disclaimer

## Directory Structure
1. Arrays
1. ClassString
1. Cpp_Basics
1. DefiningClasses
1. FlowControl
1. FuncForSubTasks
1. Intro
1. ObjectsClassesIntro
1. ProcAbstraction
1. SearchSortAlgorithm
1. StringsAndVectors

## Tools Used
1. Visual Studio [Code](https://code.visualstudio.com/)
1. Visual Studio 2019 - [Community Edition](https://visualstudio.microsoft.com/downloads/)
1. [Cygwin](https://cygwin.com)

## Building

This section outlines how to build the *.cpp files present in the directories

### Simple Way (Use Visual Studio)

### Complex Way (Use Cygwin GCC Compiler)
1. Install [Cygwin](https://cygwin.com/install.html)
1. Run `setup-x86.exe` to install g++ packages
1. Open Cygwin console
   1. Search bar
   1. Should be located at C:\cygwin64
1. Navigate to your source code location
   1. For me this was C:/Users/<userName>/Documents/<repo_name>
1. Compile using g++

   ```bash
   $ g++ -Wall CppSrcFile.cpp
   ```

## FAQs
1. Q: What style guide are you using?
   - A: I am using the style guide given by Dr. Saverio Perugini located [here](http://perugini.cps.udayton.edu/teaching/courses/cps444/style.html)
1. Q:
   - A: 

## Errors Encountered
1. G++ is not a command or cmdlet recognized
   1. Run `setup-x86_64.exe` provided by Cygwin to install the g++ package(s)
   1. Verify it's installed

   ```bash
   $ g++ --version

   ```

   - Should display what version of g++ you are using.
1. 
## Book Information
- This book was created solely for UTK Computer Science Program
Pearson Custom Computer Science (COSC 102 University of Tennessee)
- I cannot guarantee you will be able to find it unless you attend the University of Tennessee Knoxville and take COSC 102
- ISBN-13: 978-1-269-05390-7
- ISBN-10: 1-269-05390-6

## Author Information
| Revision History | |
|------------|---------|
| Created by | Dayne Nussman |
| Date of Last Update |Feb 5, 2021 |

## Disclaimer
- This was undertaken for personal study get the basics of C++ code
- I cannot verify that these are the proper solutions to the code problems - i.e. do NOT use these for your own assignments UTK students
