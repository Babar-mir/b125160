#include <iostream>
using namespace std;

class Calculator
{
private:
    float num1, num2;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    void add()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    void divide()
    {
        if (num2 != 0)
            cout << "Division = " << num1 / num2 << endl;
        else
            cout << "Division not possible (Cannot divide by zero)." << endl;
    }
};

int main()
{
    Calculator c;

    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}