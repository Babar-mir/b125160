#include <iostream>
#include <string>
using namespace std;


class Result;


class Exam {
private:
    string studentName;
    string subject;
    double marks;
    double maximumMarks;

public:
    void getInput() {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, studentName);

        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Marks Obtained: ";
        cin >> marks;

        cout << "Enter Maximum Marks: ";
        cin >> maximumMarks;
    }

    // Declare Result as a friend class
    friend class Result;
};

class Result {
public:
    // 1 & 2. Access private members of Exam and calculate percentage
    double calculatePercentage(Exam e) {
        return (e.marks / e.maximumMarks) * 100;
    }

    // 3 & 4. Display "Pass"/"Fail" and the complete result
    void displayResult(Exam e) {
        double percentage = calculatePercentage(e);

        cout << "\n----- Exam Result -----" << endl;
        cout << "Student Name  : " << e.studentName << endl;
        cout << "Subject       : " << e.subject << endl;
        cout << "Marks         : " << e.marks << " / " << e.maximumMarks << endl;
        cout << "Percentage    : " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result        : Pass" << endl;
        else
            cout << "Result        : Fail" << endl;
    }
};

// ---------------- Main ----------------
int main() {
    Exam exam1;
    cout << "Enter details for the exam:" << endl;
    exam1.getInput();

    Result result;
    result.displayResult(exam1);

    return 0;
}