#include <iostream>
using namespace std;
int main()
{
    string str[3] = {"aakash", "divya", "stars"};
    int size = sizeof(str) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < str[i].length(); j++)
        {
            char ch = str[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                cout << "vowel : " << ch;
            }
        }
    }
}