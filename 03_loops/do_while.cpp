#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int op;
    bool c = true;
    do
    {
        cout << "Enter the A value: " << endl;
        cin >> a;
        cout << "Enter the  B value: ";
        cin >> b;
        cout << "\n Enter the Operation(+ , - * /): ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "A + b : " << a + b;
            break;
        case '-':
            cout << "A - b : " << a - b;
            break;
        case '*':
            cout << "A * b : " << a * b;
            break;
        case '/':

            cout << "A / b : " << a / b;
            break;

        default:

            cout << "invalid operator";
            break;
        }

    } while (op != 'c' || 'C');
}