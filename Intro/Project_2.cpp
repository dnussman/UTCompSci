/*******************************************************************************
/
/      filename:  Project_2.cpp
/
/   description:  Given a number of pods and a number of peas per pod determines
/                 total number of peas present.
/                 !Does not verify input is valid!
/                 Adds a Hello and Goodbye message.
/
/        author:  Nussman, Dayne
/
/******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Hello!\n";

    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";

    cin >> number_of_pods;

    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " peas pods\n";
    cout << " and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << " you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";

    cout << "Goodbye!\n";
    return 0;
}