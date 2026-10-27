#include <iostream>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) { return 0; }
    virtual ~Delivery() {}
};
class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) override { return (distance / 20.0) * 60 + 5; }
};
class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) override { return (distance / 40.0) * 60 + 2; }
};

int main() {
    double d;
    cout << "Enter delivery distance (km): "; cin >> d;
    BikeDelivery b; DroneDelivery dr;
    Delivery *p1 = &b, *p2 = &dr;
    cout << "Bike delivery time : " << p1->estimateTime(d) << " minutes" << endl;
    cout << "Drone delivery time: " << p2->estimateTime(d) << " minutes" << endl;
    return 0;
}