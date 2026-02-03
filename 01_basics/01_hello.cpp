#include <iostream>
#include <vector>;
using namespace std;

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
typedef std ::vector<std::pair<std::string, int>> pairlist_t; // long data type so we make new short identifier and this identifer we used anywhere.
// typedef std::string text_t;
// typedef int number_t;
// alternative way make
using text_t = std::string;
using number_t = int;
int main()
{
    using namespace first;
    cout << x;
    /*Namespace - provides a solution for preventing name conflicts in large projects.
     Each entity needs a unique name.
     A namespace allows for identically named entities
     as long as the namespaces are different.
    */

    /*typedef - reserved keyword used to create an additional name
     (alias) for another data type New identifier for an existing type
     helps with readbility and reduces typeos*/
    pairlist_t pairlist;
    text_t firstName = "bro";
    number_t age = 20;

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = true;

    // single character
    char grade = 'A';
    char initial = 'C';
    char currency = 'C';

    // boolean (ture or false)
    string name = "Shiv";
    string day = "pizza";
    if (student)
    {
        cout << " Hello, I'm  " << name << " i'm " << age << " year old.";
    }
    else
    {
        cout << "You are not student.";
    }

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anyting from modifying it
    //(read-only)
    const double pi = 3.1415;
}
