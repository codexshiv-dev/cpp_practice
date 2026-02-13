#include <iostream>
using namespace std;
int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int key = 7;
    int end = sizeof(nums) / sizeof(int);
    for (start = 0; start <= end; start++)
    {
        if (nums[start] == key)
        {
            cout << "found at index : " << start;
        }
        else
        {
            cout << "not found";
        }
    }
}