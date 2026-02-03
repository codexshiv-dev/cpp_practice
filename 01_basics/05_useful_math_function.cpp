#include <iostream>
#include <cmath> //header file for math function
using namespace std;
int main()
{
    double x = 3.99;
    double y = 4;
    double z;

    //  z = max(x, y); //give maximum number
    // z = min(x, y); //give minimum number
    // z = pow(2, 4); // give 2 power value 4 = 16
    //  z = sqrt(9);  //give square root value 3
    // z = abs(-3); // absolute value function it will give the positive version of that number 3
    // z = round(x); // round function 3
    // z = ceil(x); // round up -there's cealing function 4
    z = floor(x); // round down - floor function 3
    cout << z;
}