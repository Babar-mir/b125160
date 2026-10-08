#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
};

class Student : virtual public Person {
protected:
    int rollNo;
    double cgpa;
public:
    Student(string n, int a, int r, double c) : Person(n, a), rollNo(r), cgpa(c) {}
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;
public:
    Employee(string n, int a, int id, double s) : Person(n, a), employeeID(id), salary(s) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    // Most-derived class initializes the virtual base directly
    TeachingAssistant(string n, int a, int r, double c, int id, double s)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, s) {}
    void display() const {
        cout << "Name        : " << name << "\n"
             << "Age         : " << age << "\n"
             << "Roll No     : " << rollNo << "\n"
             << "CGPA        : " << cgpa << "\n"
             << "Employee ID : " << employeeID << "\n"
             << "Salary      : " << salary << endl;
    }
};

int main() {
    TeachingAssistant ta("Ananya", 22, 2301, 8.7, 501, 15000);
    ta.display();
    return 0;
}