#include <iostream>
using namespace std;

int main() {
    int seats[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int position, newSeat;

    cout << "Seats before correction: ";
    for (int i = 0; i < 8; i++) {
        cout << seats[i] << " ";
    }

    cout << "\nEnter position to correct (0-7): ";
    cin >> position;

    cout << "Enter new seat number: ";
    cin >> newSeat;

    int *ptr = seats;

    *(ptr + position) = newSeat;

    cout << "\nSeats after correction: ";
    for (int i = 0; i < 8; i++) {
        cout << seats[i] << " ";
    }

    return 0;
}