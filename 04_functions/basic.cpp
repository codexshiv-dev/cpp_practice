#include <iostream>
using namespace std;
int add(int a = 10, int b = 20, int c = 20) // default argument;
{
    return a + b + c;
}
int main()
{
    cout << add();
}
