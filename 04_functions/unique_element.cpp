#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 3, 2, 4};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        bool notdup = true;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                notdup = false;
                break;
            }
        }
        if (notdup)
        {
            cout << arr[i] << " ";
        }
    }
}