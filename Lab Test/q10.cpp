#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    long long *contacts = new long long[n];

    cout << "Enter contact numbers:\n";

    for (int i = 0; i < n; i++) {
        cin >> *(contacts + i);
    }

    long long searchNumber;

    cout << "Enter contact number to search: ";
    cin >> searchNumber;

    long long *ptr = contacts;
    int position = 0;
    bool found = false;

    for (int i = 0; i < n; i++) {

        if (*ptr == searchNumber) {
            found = true;
            position = i+1;
            break;
        }

        ptr++;
    }

    if (found) {
        cout << "Contact found at position: "
             << position << endl;
    }
    else {
        cout << "Contact not found." << endl;
    }

    delete[] contacts;

    return 0;
}