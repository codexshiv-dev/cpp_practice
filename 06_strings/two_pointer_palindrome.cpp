// space complexity :0(1) and time : o(n)
// so it uses no extra memory usually runs faster
// fewer operations

#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // we will compare first and last index
    bool ans = true; // assumption
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "its a palindrome";
    }
    else
    {
        cout << "its not a pall";
    }
}