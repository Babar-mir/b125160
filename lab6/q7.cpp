#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d = 0, int m = 0, int y=0) : day(d), month(m), year(y) {}
    void input() { cin >> day >> month >> year; }
    bool operator==(const Date &d) const {
        return (day==d.day && month == d.month && year == d.year);
    }
};

int main() {
    Date d1, d2;
    cout << "Enter Time 1 (hours minutes): "; d1.input();
    cout << "Enter Time 2 (hours minutes): "; d2.input();
    
     if (d1 == d2) cout << "Output: Both dates are equal.\n";
    else          cout << "Output: The dates are not equal.\n";
    return 0;
}