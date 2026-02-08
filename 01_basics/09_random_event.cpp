#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int num = rand() % 6 + 1;
    switch (num)
    {
    case 1:
        cout << "You win a bumper sticker!\n";
        break;
    case 2:
        cout << "You win a t-shirt!\n";
        break;
    case 3:
        cout << "You win a free lunch!\n";
        break;
    case 4:
        cout << "You win a gift card!\n";
        break;
    case 5:
        cout << "You win a concert tickets!\n";
        break;

    default:
        cout << "sorry!";
        break;
    }
    return 0;
}