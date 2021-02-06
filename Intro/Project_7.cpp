/*******************************************************************************
/
/      filename:  Project_7.cpp
/
/   description:  Prints out a fun and pretty CS message.
/                 
/        author:  Nussman, Dayne
/
/******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int MAX_CHAR_LIMIT = 80;
    int lcv = 0;
    // Print top border
    for(lcv = 0; lcv < MAX_CHAR_LIMIT - 1; lcv++) {
        cout << "*";
    }
    // End line and add two empty lines
    cout << "\n\n";
    cout << "      CCC       SSSS     !!\n"; // First line of output - top of C, S, and exclamation point
    cout << "     C   C     S    S    !!\n"; // 2nd line
    cout << "    C         S          !!\n"; // 3rd line
    cout << "   C           S         !!\n"; // 4th line
    cout << "   C            SSSS     !!\n"; // 5th line
    cout << "   C                S    !!\n"; // 6th line
    cout << "    C                S   !!\n"; // 7th line
    cout << "     C   C     S    S       \n"; // 8th line
    cout << "      CCC       SSSS     00\n"; // 9th line
    cout << "\n";                            // 10th line
    // Closing border
    for(lcv = 0; lcv < MAX_CHAR_LIMIT - 1; lcv++) {
        cout << "*";
    }
    return 0;
}