#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
private:
    int consumerNumber;
    string consumerName;
    int units;
    float bill;

public:
    void acceptDetails()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill()
    {
        if (units <= 100)
        {
            bill = units * 5;
        }
        else if (units <= 200)
        {
            bill = (100 * 5) + ((units - 100) * 7);
        }
        else
        {
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    void displayBill()
    {
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << units << endl;
        cout << "Total Bill      : Rs. " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.acceptDetails();
    e.calculateBill();
    e.displayBill();

    return 0;
}