#include <iostream>
using namespace std;
int main()
{
    int start = 0, end = 100;
    int num = start;
    while (num <= end)
    {
        int factor = 0;
        int i = 1;
        while (i <= num)
        {
            if (num % i == 0)
            {
                factor++;
            }
            i++;
        }
        if (factor == 2)
        {
            cout << num;
            num++;
        }
    }
}