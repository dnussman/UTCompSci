/*******************************************************************************
/
/      filename:  Project_8.cpp
/
/   description:  Takes in number of quarters, nickels, and dimes and gives
/                 monetary value in cents.
/                 
/        author:  Nussman, Dayne
/
/******************************************************************************/
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int validateInput(string& s) {
    int valid_input = -1;
    if (!cin || s.find(".") != string::npos || s.find("-") != string::npos) {
          cout << "\nInvalid input. Please input a number such as 3.14 or 4.\n";
          cin.clear(); // clear error flag of cin
          cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore whole line until new line
       } else {
        try{
           valid_input = stoi(s);
        }
        catch (const std::invalid_argument& ia) {
           cerr << "Invalid Input. Please input a whole positive number such as 4 or 8.\n";
        }
        catch (const std::out_of_range& oor) {
           cerr << "Invalid input. Number is too large to be represented.\n";
        }
    }
    return valid_input;
}

int main()
{
    int quarters,nickels,dimes = -1;
    int quarter_cents, nickel_cents, dime_cents = 0;
    string input;
    int err_count = 0;
    int MAX_ERR_CNT = 3;
    int main_success = 0; // 1 means failure, 0 means success

    cout << "This program takes number of quarters, nickels, and dimes and";
    cout << " tells you the monetary value in cents.\n\n";
    
    do {
       cout << "Please input the number of quarters: ";
       cin >> input;
       quarters = validateInput(input);
       err_count++;
    } while (err_count < MAX_ERR_CNT && quarters < 0);

    if( quarters < 0 ) {
        cout << "Input attempts exceeded. Please input only positive whole numbers.\nGoodbye!\n";
        main_success = 1;
    }
    
    if (!main_success) {
        err_count = 0;
        do {
           cout << "\nPlease input the number of dimes: ";
           cin >> input;
           dimes = validateInput(input);
        } while (err_count < MAX_ERR_CNT && dimes < 0);

       if (dimes < 0) {
          cout << "Input attempts exceeded. Please input only positive whole numbers.\n Goodbye!\n";
          main_success = 1;   
       }
    }
    
    if (!main_success) {
       err_count = 0;
       do {
          cout << "\nPlease input the number of nickels: ";
          cin >> input;
          nickels = validateInput(input);
       } while (err_count < MAX_ERR_CNT && nickels < 0);

       if (nickels < 0) {
          cout << "Input attempts exceeded. Please input only positive whole numbers.\n Goodbye!\n";
          main_success = 1;
       }
    }
    
    if (!main_success) {
       quarter_cents = quarters*25;
       nickel_cents = nickels*5;
       dime_cents = dimes*10;
       cout << "\nThe number of quarters you have is : " << quarters << ".\n";
       cout << "The value of the quarters in cents is : " << quarter_cents << " cents.\n";
       cout << "The number of dimes you have is : " << dimes << ".\n";
       cout << "The value of the dimes in cents in : " << dime_cents << " cents.\n";
       cout << "The number of nickels you have is : " << nickels << ".\n";
       cout << "The value of the nickels in cents is : " << nickel_cents << " cents.\n";

       cout << "The total monetary value of your coins is : " << quarter_cents + nickel_cents + dime_cents << " cents.\n";

       cout << "\nThank you, Goodbye!\n";
    }
    

    return main_success;
}