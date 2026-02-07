#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1, c;
    int i = 2;

    while (i < n)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    fib(num);
    return 0;
}
