#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual double calculateFee(int hours) { return 0; }
    virtual ~ParkingSlot() {}
};
class TwoWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = 10.0 * hours;
        if (hours > 5) fee *= 0.90;
        return fee;
    }
};
class FourWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = 30.0 * hours;
        if (hours > 5) fee *= 0.90;
        return fee;
    }
};

int main() {
    int h2, h4;
    cout << "Enter hours parked (two-wheeler): "; cin >> h2;
    cout << "Enter hours parked (four-wheeler): "; cin >> h4;
    TwoWheelerSlot t; FourWheelerSlot f;
    ParkingSlot *p1 = &t, *p2 = &f;
    cout << "Two-wheeler final fee : Rs. " << p1->calculateFee(h2) << endl;
    cout << "Four-wheeler final fee: Rs. " << p2->calculateFee(h4) << endl;
    return 0;
}