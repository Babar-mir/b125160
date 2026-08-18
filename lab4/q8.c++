#include <iostream>
#include <string>
using namespace std;


class TicketChecker;


class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool bookingStatus; // true = booked, false = available

public:
    void getInput() {
        cout << "Enter Seat Number: ";
        cin >> seatNumber;

        int status;
        cout << "Enter Booking Status (1 for Booked, 0 for Available): ";
        cin >> status;
        bookingStatus = (status == 1);

        if (bookingStatus) {
            cout << "Enter Passenger Name: ";
            cin.ignore();
            getline(cin, passengerName);
        } else {
            passengerName = "N/A";
        }
    }

    // Declare TicketChecker as a friend class
    friend class TicketChecker;
};

class TicketChecker {
public:
    // 1. Display the seat details
    void displaySeatDetails(TrainSeat t) {
        cout << "\n----- Seat Details -----" << endl;
        cout << "Seat Number: " << t.seatNumber << endl;
    }

    // 2. Check whether the seat is booked or available
    void checkBookingStatus(TrainSeat t) {
        if (t.bookingStatus)
            cout << "Status     : Booked" << endl;
        else
            cout << "Status     : Available" << endl;
    }

    // 3. Display the passenger name if the seat is booked
    void displayPassengerName(TrainSeat t) {
        if (t.bookingStatus)
            cout << "Passenger  : " << t.passengerName << endl;
        else
            cout << "Passenger  : No passenger (seat available)" << endl;
    }
};

// ---------------- Main ----------------
int main() {
    TrainSeat seat1;
    cout << "Enter details for the train seat:" << endl;
    seat1.getInput();

    TicketChecker checker;
    checker.displaySeatDetails(seat1);
    checker.checkBookingStatus(seat1);
    checker.displayPassengerName(seat1);

    return 0;
}