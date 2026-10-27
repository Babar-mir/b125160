#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) { return 0; }
    virtual ~IrrigationSystem() {}
};
class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override { return 2 * (100 - moisture); }
};
class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override { return 3 * (100 - moisture); }
};

int main() {
    double m;
    do {
        cout << "Enter soil moisture (0-100%): "; cin >> m;
        if (m < 0 || m > 100) cout << "Invalid! Moisture must be between 0 and 100.\n";
    } while (m < 0 || m > 100);
    DripIrrigation d; SprinklerIrrigation s;
    IrrigationSystem *p1 = &d, *p2 = &s;
    cout << "Drip irrigation water     : " << p1->calculateWater(m) << " litres" << endl;
    cout << "Sprinkler irrigation water: " << p2->calculateWater(m) << " litres" << endl;
    return 0;
}