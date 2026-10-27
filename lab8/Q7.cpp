#include <iostream>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int firstInningsScore) { return firstInningsScore; }
    virtual ~MatchFormat() {}
};
class T20Match : public MatchFormat {
public:
    int calculateTarget(int score) override {
        int margin = (score * 1 + 99) / 100;   // ceil(1% of score)
        return score + margin;
    }
};
class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int score) override {
        int margin = (score * 2 + 99) / 100;   // ceil(2% of score)
        return score + margin;
    }
};

int main() {
    int s20, sodi;
    cout << "Enter first innings score (T20): "; cin >> s20;
    cout << "Enter first innings score (ODI): "; cin >> sodi;
    T20Match t; ODIMatch o;
    MatchFormat *p1 = &t, *p2 = &o;
    cout << "T20 target: " << p1->calculateTarget(s20) << endl;
    cout << "ODI target: " << p2->calculateTarget(sodi) << endl;
    return 0;
}