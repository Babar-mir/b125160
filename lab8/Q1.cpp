#include <iostream>
using namespace std;

class Character {
public:
    virtual double attack() { return 0; }
    virtual ~Character() {}
};
class Warrior : public Character {
    double strength;
public:
    Warrior(double s) : strength(s) {}
    double attack() override { return 20 + 2 * strength; }
};
class Archer : public Character {
    double agility;
public:
    Archer(double a) : agility(a) {}
    double attack() override { return 15 + 3 * agility; }
};

int main() {
    double s, a;
    cout << "Enter warrior strength: "; cin >> s;
    cout << "Enter archer agility: "; cin >> a;
    Warrior w(s); Archer ar(a);
    cout << "Warrior damage: " << w.attack() << endl;
    cout << "Archer damage : " << ar.attack() << endl;
    return 0;
}