// one full loop to reverse then compares two strings
// so it uses more meomory and doese more work
// slower then two pointer
// time complexity: 0(n) and space:0(n)(extra string rev)
// This creates a new string rev with the same length as str.
#include <iostream>
using namespace std;
bool ispalindrome(string str)
{
    int len = str.length();
    string rev(len, ' ');
    for (int i = 0; i < len; i++)
    {
        rev[len - i - 1] = str[i]; // it flips the index.//Copy the character from position i in str into the reverse position in rev.
    }
    return rev == str;
}
int main()
{
    string str;
    cout << "Enter the string to check palindrome or not: ";
    cin >> str;
    if (ispalindrome(str))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}