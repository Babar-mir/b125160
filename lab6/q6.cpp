#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}
    Counter &operator++() {        
        ++value;
        return *this;
    }
    Counter operator++(int) {       
        Counter old = *this;
        ++value;
        return old;
    }
    int get() const { return value; }
};

int main() {
    int start;
    cout << "Enter initial counter value: "; cin >> start;
    Counter c(start);

    cout << "Before ++c: " << c.get() << endl;
    ++c;
    cout << "After  ++c: " << c.get() << endl;

    cout << "Before c++: " << c.get() << endl;
    c++;
    cout << "After  c++: " << c.get() << endl;
    return 0;
}