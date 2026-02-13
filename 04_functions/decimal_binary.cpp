#include <iostream>
using namespace std;
string dec_2_bin(int n)
{
    string binary = " ";
    int rem;
    while (n != 0)
    {
        rem = n % 2;
        binary = to_string(rem) + binary;
        n /= 2;
    }
    return binary;
}
int main()
{
    int decimal;
    cin >> decimal;
    cout << dec_2_bin(decimal);
}