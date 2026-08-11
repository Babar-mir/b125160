#include <iostream>
using namespace std;

class Student {
    int rollNumber;
    string name;
    int numSubjects;
    float *marks;   // dynamically allocated array of marks

public:
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Number of Subjects: ";
        cin >> numSubjects;

        marks = new float[numSubjects];   // allocate memory for marks
    }

    void acceptMarks() {
        cout << "Enter marks for " << numSubjects << " subjects:" << endl;
        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayResult() {
        float total = 0;
        for (int i = 0; i < numSubjects; i++)
            total += marks[i];
        float average = total / numSubjects;

        cout << "\n--- Student Result ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < numSubjects; i++)
            cout << marks[i] << " ";
        cout << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }

    void releaseMemory() {
        delete[] marks;   // release dynamically allocated marks array
        marks = nullptr;
    }
};

int main() {
    Student s;

    s.acceptDetails();
    s.acceptMarks();
    s.displayResult();
    s.releaseMemory();

    return 0;
}