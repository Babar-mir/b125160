#include <iostream>
using namespace std;

class Distance {
    int feet, inches;
public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    void input() { cin >> feet >> inches; }
    Distance operator+(const Distance &d){
        int totalInches = inches + d.inches;
        return Distance(feet + d.feet + totalInches / 12, totalInches % 12);
    }
    void display() const { cout << feet << " feet " << inches << " inches"; }
};


int main() {
    Distance d1, d2;
    cout << "Enter Distance 1 (feet inches): "; d1.input();
    cout << "Enter Distance 2 (feet inches): "; d2.input();
    Distance result = d1 + d2;
    cout << "Distance 1: "; d1.display(); cout << endl;
    cout << "Distance 2: "; d2.display(); cout << endl;
    cout << "Result: ";     result.display(); cout << endl;
    return 0;
}