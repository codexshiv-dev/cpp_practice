#include <iostream>
#int < iomainip
using namespace std;

void showBalance(double balance)
{
    cout << "your balance is : $ " << balance;
}
double deposit()
{
    return 0;
}
double withdraw(double amount)
{
    return 0;
}

int main()
{
    double balance = 0;
    int choice;
    do
    {

        cout << "Enter your choice\n";
        cout << "1.Show Balance\n";
        cout << "2.Deposit Money\n";
        cout << "3.Withdrow Money\n";
        cout << "4.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            cout << "Invalid choice\n";
            break;

        default:
            break;
        }
    } while (choice != 4);
}