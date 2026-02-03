#include <iostream>
using namespace std;
int main()
{
    /*arithmetic operators = return the result of a specific
    arithmetic operation (+ - * /)
    */
    /*
    //order of precedence
    1. parenthesis
    2.multiplication & division
    3.addition & subtraction

    */

    double students = 6 - (5 + 4) * 3 / 2; //-7
    int remainder;

    // students = students + 2;
    students += 2;
    students++;
    students--;

    // students = students -2;
    students -= 2;

    // students = students *2;
    students *= 2;

    // students = students  / 2;
    students /= 2;

    // remainder find
    remainder = (int)students % 2;

    cout << students;
}