#include <iostream>
using namespace std;

class Distance
{
private:
    int feet1, inches1;
    int feet2, inches2;
    int totalFeet, totalInches;

public:
    void input()
    {
        cout << "Enter first distance (feet inches): ";
        cin >> feet1 >> inches1;

        cout << "Enter second distance (feet inches): ";
        cin >> feet2 >> inches2;
    }

    void addDistance()
    {
        totalFeet = feet1 + feet2;
        totalInches = inches1 + inches2;

        if (totalInches >= 12)
        {
            totalFeet += totalInches / 12;
            totalInches %= 12;
        }
    }

    void display()
    {
        cout << "\nTotal Distance = "
             << totalFeet << " ft "
             << totalInches << " in" << endl;
    }
};

int main()
{
    Distance d;

    d.input();
    d.addDistance();
    d.display();

    return 0;
}