#include <iostream>
using namespace std;
int main()
{
    int *arr = NULL;
    arr = (int *)malloc(1000);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 7;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    free(arr);
    return 0;
}