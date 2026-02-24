#include <iostream> // Include input-output library
using namespace std;
int main()
{
    int x = 20; // Normal integer variable stored in stack memory

    int *p = NULL; // Pointer initialized to NULL (not pointing anywhere yet)

    {
        int *y = new int(10); // Dynamically allocate integer (10) in heap memory
                              // y stores the address of that heap memory

        p = y; // Copy address from y into p
               // Now p also points to the same heap memory
    } // y (local pointer) is destroyed here
      // BUT heap memory created by 'new' still exists

    cout << x << *p; // Print x and the value stored in heap memory (*p = 10)

    delete p; // Free the dynamically allocated heap memory

    p = nullptr; // Set pointer to nullptr to avoid dangling pointer

    return 0; // End of program
}