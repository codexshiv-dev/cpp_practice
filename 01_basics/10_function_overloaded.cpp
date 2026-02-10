// function share the same name but you need a different set parameter;
#include <iostream>
using namespace std;
void fun1()
{

    cout << "hello !";
}
void fun1(string name)
{
    cout << "hello " << name;
}
int main()
{
    string name;
    cin >> name;
    fun1(name); // function signeture qnique.
    fun1();
    return 0;
}