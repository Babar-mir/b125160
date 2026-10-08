#include <iostream>
using namespace std;

class Academic {
protected:
    int m1, m2, m3;
public:
    Academic(int a, int b, int c) : m1(a), m2(b), m3(c) { cout << "Academic constructor\n"; }
};

class Sports {
protected:
    int sportsMarks;
public:
    Sports(int s) : sportsMarks(s) { cout << "Sports constructor\n"; }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(int a, int b, int c, int s) : Academic(a, b, c), Sports(s) {
        cout << "StudentResult constructor\n";
    }
    void display() const {
        int total = m1 + m2 + m3 + sportsMarks;
        double avg = total / 4.0;
        cout << "Academic Marks : " << m1 << ", " << m2 << ", " << m3 << "\n"
             << "Sports Marks   : " << sportsMarks << "\n"
             << "Total          : " << total << "\n"
             << "Average        : " << avg << endl;
    }
};

int main() {
    StudentResult r(80, 75, 90, 85);
    r.display();
    return 0;
}