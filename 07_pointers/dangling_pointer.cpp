#include <iostream>
using namespace std;
int main()
{
    // static menory
    // compiler time memory
    int x = 20;
    int *p = NULL;
    {
        int y = 30;
        p = &y;

    } // dangling pointer
    cout << x << *p;
    return 0;
}