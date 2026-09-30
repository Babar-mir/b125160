#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float totalMarks;
public:
    void input() {
        cout << "Name: ";  cin >> name;
        cout << "Total marks: "; cin >> totalMarks;
    }
    bool operator>(const Student &s) const { return totalMarks > s.totalMarks; }
    string getName() const { return name; }
    float getMarks() const { return totalMarks; }
};

int main() {
    Student s1, s2;
    cout << "Enter Student 1\n"; s1.input();
    cout << "Enter Student 2\n"; s2.input();

    if (s1 > s2)
        cout << s1.getName() << " has higher marks (" << s1.getMarks() << " vs " << s2.getMarks() << ")\n";
    else if (s2 > s1)
        cout << s2.getName() << " has higher marks (" << s2.getMarks() << " vs " << s1.getMarks() << ")\n";
    else
        cout << "Both students have equal marks (" << s1.getMarks() << ")\n";
    return 0;
}