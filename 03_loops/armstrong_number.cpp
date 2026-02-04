#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, copyNum, sum = 0;
    int digit = 0, rem = 0;
    cout << "Enter the number: ";
    cin >> num;
    copyNum = num;
    while (copyNum != 0)
    {
        digit++;
        copyNum /= 10;
    }
    copyNum = num;
    while (copyNum != 0)
    {
        rem = copyNum % 10;
        sum += pow(rem, digit);
        copyNum /= 10;
    }

    if (num == sum)
    {
        cout << num << " is a Armstrong number.";
    }
    else
    {
        cout << "Not a Armstrong number.";
    }
}