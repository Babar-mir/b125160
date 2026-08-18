#include <iostream>
#include <string>
using namespace std;


class HomeController;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus; // true = ON, false = OFF

public:
    void getInput() {
        cout << "Enter Device Name: ";
        cin.ignore();
        getline(cin, deviceName);

        cout << "Enter Device Type: ";
        getline(cin, deviceType);

        int status;
        cout << "Enter Initial Power Status (1 for ON, 0 for OFF): ";
        cin >> status;
        powerStatus = (status == 1);
    }

    // Declare HomeController as a friend class
    friend class HomeController;
};

class HomeController {
public:
    // 1. Display device information
    void displayDeviceInfo(SmartDevice s) {
        cout << "\n----- Device Information -----" << endl;
        cout << "Device Name: " << s.deviceName << endl;
        cout << "Device Type: " << s.deviceType << endl;
    }

    // 2. Turn the device ON
    void turnOn(SmartDevice &s) {
        s.powerStatus = true;
        cout << s.deviceName << " turned ON." << endl;
    }

    // 3. Turn the device OFF
    void turnOff(SmartDevice &s) {
        s.powerStatus = false;
        cout << s.deviceName << " turned OFF." << endl;
    }

    // 4. Display the current power status
    void displayPowerStatus(SmartDevice s) {
        cout << "Power Status: " << (s.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice device1;
    cout << "Enter details for the smart device:" << endl;
    device1.getInput();

    HomeController controller;
    controller.displayDeviceInfo(device1);
    controller.displayPowerStatus(device1);

    int choice;
    cout << "\nEnter 1 to turn device ON, 0 to turn device OFF: ";
    cin >> choice;

    if (choice == 1)
        controller.turnOn(device1);
    else
        controller.turnOff(device1);

    controller.displayPowerStatus(device1);

    return 0;
}