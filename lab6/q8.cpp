#include <iostream>
#include <string>
using namespace std;

class Item {
    string name;
    float price;
    int quantity;
public:
    Item(string n = "", float p = 0, int q = 0) : name(n), price(p), quantity(q) {}
    void input() {
        cout << "  Name: ";     cin >> name;
        cout << "  Price: ";    cin >> price;
        cout << "  Quantity: "; cin >> quantity;
    }
    bool isEmpty() const { return name.empty(); }
    Item operator+(const Item &it) const {
        if (name == it.name && price == it.price)
            return Item(name, price, quantity + it.quantity);
        cout << "Cannot combine: items differ in name or price.\n";
        return Item();                       // empty item, operands untouched
    }
    void display() const {
        cout << "Item: " << name << ", Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Item a, b;
    cout << "Enter Item 1\n"; a.input();
    cout << "Enter Item 2\n"; b.input();

    Item c = a + b;
    if (!c.isEmpty()) { cout << "Combined item:\n"; c.display(); }

    cout << "\nOriginal objects (unchanged):\n";
    a.display();
    b.display();
    return 0;
}