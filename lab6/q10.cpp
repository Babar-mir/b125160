#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;
public:
    Product(string n = "", float p = 0, int q = 0) : name(n), price(p), quantity(q) {}
    void input() {
        cout << "  Name: ";     cin >> name;
        cout << "  Price: ";    cin >> price;
        cout << "  Quantity: "; cin >> quantity;
    }
    float totalValue() const { return price * quantity; }
    bool isEmpty() const { return name.empty(); }
    Product operator+(const Product &p) const {
        if (name == p.name && price == p.price)
            return Product(name, price, quantity + p.quantity);
        cout << "Cannot combine: products differ in name or price.\n";
        return Product();
    }
    bool operator>(const Product &p) const { return totalValue() > p.totalValue(); }
    void display() const {
        cout << name << " | Price: " << price << " | Qty: " << quantity
             << " | Total Value: " << totalValue() << endl;
    }
};

int main() {
    Product p1, p2;
    cout << "Enter Product 1\n"; p1.input();
    cout << "Enter Product 2\n"; p2.input();

    Product sum = p1 + p2;
    if (!sum.isEmpty()) { cout << "\nCombined product:\n"; sum.display(); }

    cout << "\nComparison by total value:\n";
    if (p1 > p2)      cout << "Product 1 has the higher total value.\n";
    else if (p2 > p1) cout << "Product 2 has the higher total value.\n";
    else              cout << "Both have equal total value.\n";

    cout << "\nOriginal products (unchanged):\n";
    p1.display();
    p2.display();
    return 0;
}