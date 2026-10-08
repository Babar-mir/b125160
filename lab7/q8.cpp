#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string name;
    int patientID;
    int age;
public:
    Patient(string n, int id, int a) : name(n), patientID(id), age(a) {}
};

class InPatient : public Patient {
    double roomCharges; // per day
    int days;
public:
    InPatient(string n, int id, int a, double rc, int d) : Patient(n, id, a), roomCharges(rc), days(d) {}
    void displayBill() const {
        cout << "Patient Name : " << name << "\n"
             << "Patient ID   : " << patientID << "\n"
             << "Age          : " << age << "\n"
             << "Room Charges : " << roomCharges << "/day x " << days << " days\n"
             << "Total Bill   : " << roomCharges * days << endl;
    }
};

int main() {
    InPatient p("Meera", 9001, 34, 3000, 5);
    p.displayBill();
    return 0;
}