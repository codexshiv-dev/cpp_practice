// File: leap_year.cpp
// Purpose: Check if a year is leap year
// Author: Gupta Shiv
// Date: 2026-02-02

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not leap year";
    }
}