#include <iostream>
using namespace std;

int main() {
    int battery = 50,  incBattery;

    int *ptr = &battery;
    cout << "Current battery: " << *ptr << "%" << endl;
    cout<<"enter the charged battery ";
    cin>>incBattery;
    *ptr = *ptr + incBattery;
;

    cout << "Updated battery: " << *ptr << "%" << endl;
    return 0;
}