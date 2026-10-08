#include <iostream>
using namespace std;

class BankAccount {
protected:
    long accNo;
    double balance;
public:
    BankAccount(long a, double b) : accNo(a), balance(b) {}
};

class SavingsAccount : public BankAccount {
    double interestRate;
public:
    SavingsAccount(long a, double b, double r) : BankAccount(a, b), interestRate(r) {}
    void addInterest() { balance += balance * interestRate / 100; }
    void display() const {
        cout << "Savings Account " << accNo << " | Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
    double minBalance, maintenanceCharge;
public:
    CurrentAccount(long a, double b, double m, double c) : BankAccount(a, b), minBalance(m), maintenanceCharge(c) {}
    void applyCharge() { if (balance < minBalance) balance -= maintenanceCharge; }
    void display() const {
        cout << "Current Account " << accNo << " | Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(1001, 10000, 4);
    s.addInterest();
    s.display();

    CurrentAccount c(2001, 3000, 5000, 200);
    c.applyCharge();
    c.display();
    return 0;
}