#include <iostream>
using namespace std;

void updateStatus(int *status) {
    if (*status == 1) {
        *status = 2;
    }
    else if (*status == 2) {
        *status = 3;
    }
}

void displayStatus(int status) {
    if (status == 1)
        cout << "Processing";
    else if (status == 2)
        cout << "Shipped";
    else if (status == 3)
        cout << "Delivered";
    else
        cout << "Invalid status";
}

int main() {
    int status;

    cout << "Enter status code (1-3): ";
    cin >> status;

    cout << "Before update: ";
    displayStatus(status);

    updateStatus(&status);

    cout << "\nAfter update: ";
    displayStatus(status);

    return 0;
}