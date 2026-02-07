#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int temp = num;
    int rev = 0, rem = 0;
    while (temp >= 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;

        temp /= 10;
    }
    temp = num;
    cout << rev;
    if (num == rev)
    {
        cout << "palandrom";
    }
    else
    {
        cout << "not";
    }
    return 0;
}