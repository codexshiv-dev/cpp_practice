#include <iostream>
using namespace std;
int main()
{
    double temp;
    char unit;
    cout << "***Temperature conversion*** \n";
    cout << "F = Fahrenheit\n";
    cout << "F = Celsius\n";
    cout << "what unit would you like to convert to:";
    cin >> unit;
    if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "The temperature  is : " << temp << "C\n";
    }
    else if (unit == 'f' || unit == 'F')
    {
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        temp = (1.8 * temp) + 32;
        cout << "The temperature  is : " << temp << " F\n";
    }
    else
    {
        cout << "Invalid, Please Enter (F or c) ";
    }
}