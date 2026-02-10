#include <iostream>
using namespace std;
int main()
{
    int nums[5] = {2, 4, 5, 6, 8};
    int size = sizeof(nums) / sizeof(int);
    for (int i = 1; i <= size - 1; i++)
    {
        if (nums[i] % 2 == 0)
        {
            cout << "even number: " << nums[i] << endl;
        }
        else
        {
            cout << "odd number. " << nums[i] << endl;
        }
    }
}