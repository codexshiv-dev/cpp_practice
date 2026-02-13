#include <iostream>
#include <string>
using namespace std;
int main()
{
    string binary;
    cin >> binary;
    int decimal = stoi(binary, 0, 2);
    // if  decimal to binary then only change
    cout << decimal;
    return 0;
}