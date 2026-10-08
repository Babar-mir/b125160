#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
    void input() { cin >> hours >> minutes; }
    Time operator+(const Time &t) const {
        int totalMin = minutes + t.minutes;
        return Time(hours + t.hours + totalMin / 60, totalMin % 60);
    }
    void display() const { cout << hours << " hours " << minutes << " minutes"; }
};

int main() {
    Time t1, t2;
    cout << "Enter Time 1 (hours minutes): "; t1.input();
    cout << "Enter Time 2 (hours minutes): "; t2.input();
    Time result = t1 + t2;
    cout << "Time 1: "; t1.display(); cout << endl;
    cout << "Time 2: "; t2.display(); cout << endl;
    cout << "Result: "; result.display(); cout << endl;
    return 0;
}
