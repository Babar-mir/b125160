#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    void enterDetails()
    {
        cout << "Enter Account Number: ";
        cin >>accountNumber;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >>balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance += amount;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful." << endl;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }

    void display()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.enterDetails();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}