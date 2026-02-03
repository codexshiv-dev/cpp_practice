#include <iostream>
using namespace std;
int main()
{
    int age;
    string name;
    cout << "what's your age?: ";
    cin >> age;
    cout << "what's your full name?:";
    getline(cin >> ws, name); /*able to take string with whitespace &
                               ( <<ws )this portion will eleminate new
                               line character or any white space before user input */

    cout << "Hello,  " << name << endl;
    cout << "You are " << age << "years old";
    return 0;
}