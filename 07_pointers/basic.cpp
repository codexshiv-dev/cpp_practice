// Create a pointer variable with the name ptr,
// that points to a string variable, by using the asterisk sign * (string* ptr).
// Use the & operator to store the memory address of the variable called food, and assign it to the pointer.
// Now, ptr holds the value of food's memory address.
// string* mystring; // Preferred
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int *p; // the type of the pointer has to match the type of the variable
    p = &x;
    int **q = &p;
    cout << x << endl; // var
    cout << p << endl;
    cout << q;
}