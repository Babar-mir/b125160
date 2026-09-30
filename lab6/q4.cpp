#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}
    Number operator-() const { return Number(-value); }   // original unchanged
    void display(const char *label) const { cout << label << " = " << value << endl; }
};

int main() {
    int x;
    cout << "Enter a number: "; cin >> x;
    Number n1(x);
    Number n2 = -n1;
    n1.display("n1");
    n2.display("n2");
    return 0;
}