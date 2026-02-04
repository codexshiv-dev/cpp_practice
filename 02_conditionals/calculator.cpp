#include <iostream>
using namespace std;
int main()
{
    int a, b, result;
    char ch;
    cout << "Enter the operand a and b:";
    cin >> a >> b;
    cout << "Enter the operator (+ - * /):";
    cin >> ch;

    switch (ch)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    case '%':
        result = a % b;
        break;

    default:
        cout << "Invalid operator.";
        break;
    }

    cout << "the result is " << a << ch << b << " = " << result;
}