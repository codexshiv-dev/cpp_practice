#include <iostream>
using namespace std;
int main()
{
    // pseudo-random = Not truly random (but close)
    // initialized random num generator first.
    srand(time(NULL));
    int num = (rand() % 6) + 1; // num between 1 and 6,,if we need rolling a six-sided dice .function random num, num add 0 to 5 so we add 1;
    cout << num;
    return 0;
}