#include <iostream>
using namespace std;
int main()
{
    long fact = 1;
    int num;
    cout << "Enter the number:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact << " the factorial of given number.";
    return 0;
}