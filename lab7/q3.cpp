#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNo;
    int rentalDays;
public:
    Vehicle(string r, int d) : regNo(r), rentalDays(d) {}
};

class Car : public Vehicle {
protected:
    double dailyRate;
public:
    Car(string r, int d, double rate) : Vehicle(r, d), dailyRate(rate) {}
};

class LuxuryCar : public Car {
    double luxuryCharge;
public:
    LuxuryCar(string r, int d, double rate, double lux) : Car(r, d, rate), luxuryCharge(lux) {}
    void display() const {
        double total = (dailyRate + luxuryCharge) * rentalDays;
        cout << "Registration No : " << regNo << "\n"
             << "Rental Days     : " << rentalDays << "\n"
             << "Daily Rate      : " << dailyRate << "\n"
             << "Luxury Charge   : " << luxuryCharge << "/day\n"
             << "Total Cost      : " << total << endl;
    }
};

int main() {
    LuxuryCar c("OD02AB1234", 4, 2500, 1500);
    c.display();
    return 0;
}