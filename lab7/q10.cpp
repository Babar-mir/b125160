#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empID;
    string name;
public:
    Employee(int id = 0, string n = "") : empID(id), name(n) {}
};

class Developer : virtual public Employee {
protected:
    string language;
public:
    Developer(int id, string n, string l) : Employee(id, n), language(l) {}
};

class Tester : virtual public Employee {
protected:
    string testingTool;
public:
    Tester(int id, string n, string t) : Employee(id, n), testingTool(t) {}
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n, string l, string t)
        : Employee(id, n), Developer(id, n, l), Tester(id, n, t) {}
    void display() const {
        cout << "Employee ID  : " << empID << "\n"  
             << "Name         : " << name << "\n"
             << "Language     : " << language << "\n"
             << "Testing Tool : " << testingTool << endl;
    }
};

int main() {
    TechLead t(7001, "Karan", "C++", "Selenium");
    t.display();
    cout << "Size of TechLead: " << sizeof(t) << " bytes" << endl;
    return 0;
}