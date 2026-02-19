#include <iostream>
using namespace std;
class Arithmetic
{
public: // default private
    int a, b;
    int add()
    {
        return a + b;
    }
    int mun()
    {
        return a * b;
    }
};

int main()
{
    Arithmetic obj;
    cout << "Enter the number: \n";
    cin >> obj.a;
    cin >> obj.b;

    cout << obj.add() << endl;
    cout << obj.mun() << endl;
}