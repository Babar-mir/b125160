#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of tables: ";
    cin >> n;

    int *tables = new int[n];

    cout << "Enter table numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(tables + i);
    }

    int smallest =*(tables+0);

    for (int i = 1; i < n; i++) {
        if (*(tables + i) < smallest) {
            smallest = *(tables + i);
        }
    }

    cout << "Smallest table number: " << smallest << endl;

    delete[] tables;

    return 0;
}