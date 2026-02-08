#include <iostream>
using namespace std;
int climbing(int n)
{
    int a = 1, b = 2, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Ways to climb: " << climbing(num);
}