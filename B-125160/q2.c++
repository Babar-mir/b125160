#include <iostream>
using namespace std;

int main() {
    int waterLevel = 500;
    int INCwater, DECwater;
    int *ptr = &waterLevel;

    cout << "Current water level: " << *ptr << " litres" << endl;

    cout<< "Enter the Increased water level " << endl;
    cin>>INCwater;
    *ptr = *ptr + INCwater;

    cout<< "Enter the decreased water level Decreasing " << endl;
    cin>>DECwater;
    *ptr = *ptr - DECwater;


    cout << "Final water level: " << *ptr << " litres" << endl;

    return 0;
}