#include <iostream>
using namespace std;

class Employee {
    int empId;
    string empName;
    float basicSalary;
    int numMonths;
    float *monthlyEarnings;   // dynamically allocated array

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Months: ";
        cin >> numMonths;

        monthlyEarnings = new float[numMonths];   // allocate memory for months
    }

    void acceptMonthlyEarnings() {
        cout << "Enter earnings for " << numMonths << " months:" << endl;
        for (int i = 0; i < numMonths; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void displayAnalysis() {
        float total = 0;
        for (int i = 0; i < numMonths; i++)
            total += monthlyEarnings[i];
        float average = total / numMonths;

        int highestIndex = 0;
        for (int i = 1; i < numMonths; i++) {
            if (monthlyEarnings[i] > monthlyEarnings[highestIndex])
                highestIndex = i;
        }

        cout << "\n--- Employee Salary Analysis ---" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Monthly Earnings: ";
        for (int i = 0; i < numMonths; i++)
            cout << monthlyEarnings[i] << " ";
        cout << endl;
        cout << "Total Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;
        cout << "Highest Earning Month: Month " << (highestIndex + 1)
             << " (" << monthlyEarnings[highestIndex] << ")" << endl;
    }

    void releaseMemory() {
        delete[] monthlyEarnings;   // release dynamically allocated memory
        monthlyEarnings = nullptr;
    }
};

int main() {
    Employee emp;

    emp.acceptDetails();
    emp.acceptMonthlyEarnings();
    emp.displayAnalysis();
    emp.releaseMemory();

    return 0;
}