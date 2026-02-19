// Create a pointer variable with the name ptr,
// that points to a string variable, by using the asterisk sign * (string* ptr).
// Use the & operator to store the memory address of the variable called food, and assign it to the pointer.
// Now, ptr holds the value of food's memory address.
// string* mystring; // Preferred
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4};
    int *p = arr;
    for (int i = 0; i < 3; i++)
    {

        cout << "The value is :" << *(p + i) << endl;               // dereference=  mean value print
        cout << "The address of the value is: " << (p + i) << endl; // reference = address print  step by step
    }
    return 0;
}