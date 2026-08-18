#include <iostream>
#include <string>
using namespace std;

// ---------------- 3. Parking Slot ----------------
class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool isOccupied;   // Boolean variable to represent occupancy

public:
    ParkingSlot(int slot, string vehicle, bool occupied) {
        slotNumber = slot;
        vehicleNumber = vehicle;
        isOccupied = occupied;
    }

    // Friend function declaration
    friend void checkSlot(ParkingSlot p);
};

// Friend function definition
void checkSlot(ParkingSlot p) {
    cout << "----- Parking Slot Details -----" << endl;
    cout << "Slot Number : " << p.slotNumber << endl;

    if (p.isOccupied) {
        cout << "Status      : Occupied" << endl;
        cout << "Vehicle No  : " << p.vehicleNumber << endl;
    } else {
        cout << "Status      : Available" << endl;
    }
}

// ---------------- Main ----------------
int main() {
    ParkingSlot slot1(101, "OJ-15-AB-1234", true);
    checkSlot(slot1);

    cout << endl;

    ParkingSlot slot2(102, "", false);
    checkSlot(slot2);

    return 0;
}