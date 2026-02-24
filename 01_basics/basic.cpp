#include <iostream>
using namespace std;
int main()
{
    auto x = 5;
    cout << x << endl;
    auto alpha = 'A';
    cout << alpha << endl;
    auto name = "sri";
    cout << name << endl;
    cout << sizeof(name);
    cout << *(name + 1);
}