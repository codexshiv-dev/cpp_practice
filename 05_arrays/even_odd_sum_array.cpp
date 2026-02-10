#include <iostream>
using namespace std;
int main()
{
    int nums[5] = {2, 3, 4, 5, 6};
    int size = sizeof(nums) / sizeof(int);
    int odd_sum = 0, even_sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even_sum += nums[i];
        }
        else
        {
            odd_sum += nums[i];
        }
    }
    cout << "even number sum : " << even_sum << endl;
    cout << "odd number sum : " << odd_sum << endl;
    return 0;
}