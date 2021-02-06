/*******************************************************************************
/
/      filename:  Project_5.cpp
/
/   description:  Takes two integers and determines the product.
/                 
/        author:  Nussman, Dayne
/
/******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    double product = 0;
    double x, y = 0;
    int error_cnt = 0;
    int MAX_ERR_CNT = 3;

    cout << "This program takes 2 numbers and determines their product.\n";
    while (error_cnt < MAX_ERR_CNT) {
       cout << "Please input the first number: ";
       cin >> x;
       if (!cin) { // cin returns error if type input is not as expected
          cout << "\nInvalid input. Please input a number such as 3.14 or 4.\n";
          cin.clear(); // clear error flag of cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore whole line until new line
          error_cnt++;
       } else {
           break;
       }
    }

    if (error_cnt >= MAX_ERR_CNT) {
        cout << "\nToo many invalid inputs! Goodbye!\n";
        return 0;
    }

    error_cnt = 0;
    while(error_cnt < MAX_ERR_CNT) {
       cout << "\nPlease input the second number: ";
       cin >> y;
       if (!cin) {
           cout << "\nInvalid input. Please input a number such as 3.14 or 4.\n";
           cin.clear(); // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore whole line until new line
           error_cnt++;
       } else {
           break;
       }
    }

    if (error_cnt >= MAX_ERR_CNT) {
       cout << "\nToo many invalid inputs! Goodbye!\n";
       return 0;
    }

    cout << "\nThe two inputs are: " << x << " and " << y << ".\n";
    product = x*y;
    cout << "\nThe product of " << x << " and " << y << " is " << product << ".\n";

    cout << "\nThank you, Goodbye!\n";
    return 0;
}