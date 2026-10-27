#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) { cout << "Robot moving " << distance << " m" << endl; }
    virtual ~Robot() {}
};
class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled robot travel time: " << distance / 2.0 << " seconds" << endl;
    }
};
class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked robot travel time: " << distance / 1.2 << " seconds" << endl;
    }
};

int main() {
    double d;
    cout << "Enter distance to travel (m): "; cin >> d;
    Robot *r1 = new WheeledRobot();
    Robot *r2 = new TrackedRobot();
    r1->move(d);
    r2->move(d);
    delete r1;
    delete r2;
    return 0;
}