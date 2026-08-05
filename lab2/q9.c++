#include <iostream>
#include <string>
using namespace std;

class StudentResult
{
private:
    string studentName;
    int rollNumber;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void acceptDetails()
    {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, studentName);

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Marks of 5 Subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateResult()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = (total / 500.0) * 100;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayResult()
    {
        cout << "\n----- Student Result -----\n";
        cout << "Student Name : " << studentName << endl;
        cout << "Roll Number  : " << rollNumber << endl;
        cout << "Total Marks  : " << total << "/500" << endl;
        cout << "Percentage   : " << percentage << "%" << endl;
        cout << "Grade        : " << grade << endl;
    }
};

int main()
{
    StudentResult s;

    s.acceptDetails();
    s.calculateResult();
    s.displayResult();

    return 0;
}