#include <iostream>
using namespace std;
int main()
{
    int num = 1256;
    int rev = 0, digit;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    cout << "Reversed number = " << rev;
    return 0;
}