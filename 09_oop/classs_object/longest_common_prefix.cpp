#include <iostream>
#include <vector>

using namespace std;
class solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";
        string prefix = strs[0];
        for (int i = 0; i < strs.size(); i++)
        {
            while (strs[i].find(prefix) != 0)
            {
                prefix.pop_back();
                if (prefix.empty())
                {
                    return "";
                }
            }
        }
        return prefix;
    }
};
int main()
{

    solution s;
    vector<string> strs = {"flower", "flow", "flight"};
    string result = s.longestCommonPrefix(strs);
    cout << "\nLongest Common prefix: " << result << endl;

    return 0;
}