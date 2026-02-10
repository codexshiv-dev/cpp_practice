#include <iostream>
using namespace std;
bool ispalindrom(string str)
{
    int length = str.length();
    string rev(length, ' ');
    for (int i = length - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    return rev == str;
}
int main()
{
    string str;
    cout << "Enter the word: ";
    cin >> str;
    cout << ispalindrom(str);
}