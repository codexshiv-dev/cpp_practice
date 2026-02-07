#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << num;
    int count = 0;
    int sum = 0;
    if (num == 0)
    {
        cout << 1;
        return 0;
    }

    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
        count++;
    }
    cout << "the digit is : " << count << endl;
    cout << "then sum  : " << sum << endl;

    return 0;
}