#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    double b;
    double c;
    cout << "Enter the side A: ";
    cin >> a;
    cout << "Enter the side B: ";
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "The side of C is :" << c;
}