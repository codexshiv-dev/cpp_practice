#include <iostream>
using namespace std;

int main()
{
    int *a = new int[10]; // Dynamically allocate an array of 10 integers in heap memory

    for (int i = 0; i < 10; i++) // Loop to read 10 values into the array
    {
        cin >> a[i]; // Store input values in the dynamically allocated array
    }

    delete[] a; // Free the dynamically allocated array memory

    a = nullptr; // Set pointer to nullptr to avoid dangling pointer

    return 0; // End of program
}
// this is managed memory
// and
//  vector<int>arr(100);
//   automatic
//  heap