#include <iostream>
#include <string>
using namespace std;

class SecuritySystem;

class Door {
private:
    int doorNumber;
    bool lockStatus; // true = locked, false = unlocked

public:
    void getInput() {
        cout << "Enter Door Number: ";
        cin >> doorNumber;

        int status;
        cout << "Enter Lock Status (1 for Locked, 0 for Unlocked): ";
        cin >> status;
        lockStatus = (status == 1);
    }

    // Declare SecuritySystem as a friend class
    friend class SecuritySystem;
};

class SecuritySystem {
public:
    // Member function that checks the lock status of a Door object
    void checkLockStatus(Door d) {
        cout << "\n----- Security Check -----" << endl;
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.lockStatus)
            cout << "Status     : Locked" << endl;
        else
            cout << "Status     : Unlocked" << endl;
    }
};

// ---------------- Main ----------------
int main() {
    Door door1;
    cout << "Enter details for the door:" << endl;
    door1.getInput();

    SecuritySystem security;
    security.checkLockStatus(door1);

    return 0;
}