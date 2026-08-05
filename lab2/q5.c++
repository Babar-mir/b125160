#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float hra, da, grossSalary;

public:
    void acceptDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary()
    {
        hra = 0.20 * basicSalary;
        da = 0.10 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }

    void display()
    {
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }
};

int main()
{
    Employee e;

    e.acceptDetails();
    e.calculateSalary();
    e.display();

    return 0;
}