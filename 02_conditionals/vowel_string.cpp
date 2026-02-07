#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
    string word;
    cin >> word;

    int n = word.length();
    int c = 0;

    transform(word.begin(), word.begin(), word.begin(), ::tolower);

    for (int i = 0; i < n; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            c++;
        }
    }
    cout << c;
}