#include <iostream>
using namespace std;
int main()
{
    int x = 20;           // norma variable (stack memory)
    int *y = new int(10); // dynamic memory (heap memory)
    cout << x << *y;      // dereferecing pointer
    delete y;             // free heap memory
    y = nullptr;
    return 0;
}