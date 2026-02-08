#include <iostream>
using namespace std;
int main()
{
    int guess, num;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    cout << "************Number Guessing Game!!****************\n";
    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;
        if (guess < 1 || guess > 100)
        {
            cout << "Please enter a number between 1 and 100.\n";
            continue;
        }
        if (guess > num)
        {
            cout << "Too high!\n";
        }
        else if (guess < num)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "CORRECT! # of tries:" << tries << '\n';
        }

    } while (guess != num);
    cout << "********************************";
    return 0;
}