#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) { cout << "Person constructor\n"; }
};

class Employee : public Person {
protected:
    int empID;
    double salary;
public:
    Employee(string n, int a, int id, double s) : Person(n, a), empID(id), salary(s) {
        cout << "Employee constructor\n";
    }
};

class Manager : public Employee {
    string department;
    int teamSize;
public:
    Manager(string n, int a, int id, double s, string d, int t)
        : Employee(n, a, id, s), department(d), teamSize(t) {
        cout << "Manager constructor\n";
    }
    void display() const {
        cout << "\nName: " << name << "\nAge: " << age << "\nEmployee ID: " << empID
             << "\nSalary: " << salary << "\nDepartment: " << department
             << "\nTeam Size: " << teamSize << endl;
    }
};

int main() {
    Manager m("Vikram", 40, 101, 90000, "Engineering", 12);
    m.display();
    return 0;
}