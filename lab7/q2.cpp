#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    int marks[3];
public:
    Student(string n, int r, int m1, int m2, int m3) : name(n), rollNo(r) {
        marks[0] = m1; marks[1] = m2; marks[2] = m3;
    }
    virtual int calculateResult() {
        return marks[0] + marks[1] + marks[2];
    }
    virtual ~Student() {}
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r, int a, int b, int c) : Student(n, r, a, b, c) {}
    int calculateResult() override {
        int total = Student::calculateResult();
        cout << "[Regular] " << name << " (Roll " << rollNo << ") Total = " << total << endl;
        return total;
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r, int a, int b, int c) : Student(n, r, a, b, c) {}
    int calculateResult() override {
        int total = Student::calculateResult() + 5;
        cout << "[Scholarship] " << name << " (Roll " << rollNo << ") Total (with 5 bonus) = " << total << endl;
        return total;
    }
};

int main() {
    RegularStudent r("Aman", 101, 70, 80, 90);
    ScholarshipStudent s("Sara", 102, 70, 80, 90);
    Student* arr[2] = {&r, &s};
    for (Student* p : arr) p->calculateResult();
    return 0;
}