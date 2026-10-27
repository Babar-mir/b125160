#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double cpuHours) { return 0; }
    virtual ~CloudResource() {}
};
class StandardInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = 5 * cpuHours;
        if (cpuHours > 100) cost *= 0.85;
        return cost;
    }
};
class PremiumInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = 12 * cpuHours;
        if (cpuHours > 100) cost *= 0.85;
        return cost;
    }
};

int main() {
    double hs, hp;
    cout << "Enter CPU hours (Standard instance): "; cin >> hs;
    cout << "Enter CPU hours (Premium instance): "; cin >> hp;
    StandardInstance s; PremiumInstance p;
    CloudResource *p1 = &s, *p2 = &p;
    cout << "Standard instance final cost: Rs. " << p1->calculateCost(hs) << endl;
    cout << "Premium instance final cost : Rs. " << p2->calculateCost(hp) << endl;
    return 0;
}