#include <iostream>
using namespace std;

class Product {
    int productId;
    string productName;
    float price;
    int quantity;

public:
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productId;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayDetails() {
        cout << "ID: " << productId << ", Name: " << productName
             << ", Price: " << price << ", Qty: " << quantity
             << ", Subtotal: " << price * quantity << endl;
    }

    float getSubtotal() {
        return price * quantity;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n];   // dynamically allocate array of products

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << ":" << endl;
        cart[i].acceptDetails();
    }

    cout << "\n--- Shopping Cart ---" << endl;
    for (int i = 0; i < n; i++)
        cart[i].displayDetails();

    float total = 0;
    for (int i = 0; i < n; i++)
        total += cart[i].getSubtotal();

    cout << "\nTotal Amount: " << total << endl;

    delete[] cart;   // release dynamically allocated memory
    cart = nullptr;

    return 0;
}