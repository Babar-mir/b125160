#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double b) : name(n), basicSalary(b) {}
};

class Developer : public Employee {
protected:
    int experience;
public:
    Developer(string n, double b, int e) : Employee(n, b), experience(e) {}
    double experienceBonus() const { return 0.05 * basicSalary * experience; }
};

class SeniorDeveloper : public Developer {
    double projectBonus;
public:
    SeniorDeveloper(string n, double b, int e, double p) : Developer(n, b, e), projectBonus(p) {}
    void display() const {
        double finalSalary = basicSalary + experienceBonus() + projectBonus;
        cout << "Name             : " << name << "\n"
             << "Basic Salary     : " << basicSalary << "\n"
             << "Experience Bonus : " << experienceBonus() << "\n"
             << "Project Bonus    : " << projectBonus << "\n"
             << "Final Salary     : " << finalSalary << endl;
    }
};

int main() {
    SeniorDeveloper s("Rahul", 50000, 6, 15000);
    s.display();
    return 0;
}