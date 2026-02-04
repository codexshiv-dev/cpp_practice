#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1, sum = 0;
    cout << "Enter the number:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = 1; // reset fact
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
            sum += fact;
        }
    }
    cout << "sum of series: " << sum;
    return 0;
}