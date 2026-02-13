#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance)
{
    cout << "your balance is : $ " << fixed << setprecision(2) << balance << endl;
}
double deposit()
{
    double amount = 0;
    cout << "Enter amount to be deposited :";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "That's not a valid amount.\n";
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "insufficient funds.\n";
    }
    else if (amount < 0)
    {
        cout << "That's not a valid amount. \n";
    }
    else
    {
        return amount;
    }
}

int main()
{
    double balance = 0;
    int choice = 0;
    do
    {

        cout << "Enter your choice\n";
        cout << "1.Show Balance\n";
        cout << "2.Deposit Money\n";
        cout << "3.Withdrow Money\n";
        cout << "4.Exit\n";
        cin >> choice;
        cin.clear();
        fflush(stdin); // clear the input buffer
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);

            break;
        case 4:
            cout << "Thanks for visiting!\n";

            break;

        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);
}