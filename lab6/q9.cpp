#include <iostream>
using namespace std;

class Temperature {
    float celsius;
public:
    Temperature(float c = 0) : celsius(c) {}
    void input() { cin >> celsius; }
    bool operator<(const Temperature &t) const { return celsius < t.celsius; }
    bool operator>(const Temperature &t) const { return celsius > t.celsius; }
    float get() const { return celsius; }
};

int main() {
    Temperature t1, t2;
    cout << "Enter first temperature (C): ";  t1.input();
    cout << "Enter second temperature (C): "; t2.input();

    if (t1 < t2)      cout << t1.get() << " C is lower than " << t2.get() << " C\n";
    else if (t1 > t2) cout << t1.get() << " C is higher than " << t2.get() << " C\n";
    else              cout << "Both temperatures are equal (" << t1.get() << " C)\n";
    return 0;
}