#include <iostream>
#include <cmath>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) { cout << "Threats detected: " << threats << endl; }
    virtual ~SecurityScanner() {}
};
class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "[Basic Scanner]    Threats detected: " << threats << endl;
    }
};
class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int removed = (int)round(0.90 * threats);
        int remaining = threats - removed;
        cout << "[Advanced Scanner] Threats detected: " << threats
             << ", remaining after removal: " << remaining << endl;
    }
};

int main() {
    int t;
    cout << "Enter number of threats: "; cin >> t;
    BasicScanner b; AdvancedScanner a;
    SecurityScanner *p1 = &b, *p2 = &a;
    p1->scan(t);
    p2->scan(t);
    return 0;
}