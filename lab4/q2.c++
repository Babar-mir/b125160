#include <iostream>
#include <string>
using namespace std;

// ---------------- 2. Mobile Phone Settings ----------------
class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    void getInput(){
        cout << "Enter brand name: ";
        cin >> brand;
   
 
        cout << "enter nodel: ";
        cin>>model;
 
        cout << "Enter battery Percentage: ";
        cin >> batteryPercentage;

    }


    // Friend function declaration
    friend void checkBattery(Mobile m);
};

// Friend function definition
void checkBattery(Mobile m) {
    cout << "----- Mobile Details -----" << endl;
    cout << "Brand   : " << m.brand << endl;
    cout << "Model   : " << m.model << endl;
    cout << "Battery : " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main(){
    Mobile m;
    m.getInput();
    checkBattery(m);
    return 0;
}