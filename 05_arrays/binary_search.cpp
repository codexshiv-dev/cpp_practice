#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 5, 7, 22, 46, 58};
    int key = 46;
    int start = 0;
    int n = sizeof(nums) / sizeof(int);
    int end = n - 1;
    int mid;
    int found = false;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == key)
        {
            cout << "key found at index :" << mid;
            found = true;
            break;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else if (key < nums[mid])
        {
            end = mid - 1;
        }
        if (!found)
        {
            cout << "not found";
        }
    }
    return 0;
}