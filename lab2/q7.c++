#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float price;

public:
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void displayDetails()
    {

        cout << "Product ID      : " << productID << endl;
        cout << "Product Name    : " << productName << endl;
        cout << "Quantity        : " << quantity << endl;
        cout << "Price per Unit  : " << price << endl;
    }

    void sellProduct()
    {
        int sold;

        cout << "\nEnter Quantity to Sell: ";
        cin >> sold;

        if (sold <= quantity)
        {
            quantity -= sold;
            cout << "Sale Successful." << endl;
        }
        else
        {
            cout << "Insufficient Stock." << endl;
        }
    }

    void inventoryValue()
    {
        cout << "Inventory Value = " << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.acceptDetails();
    p.displayDetails();
    p.sellProduct();
    p.inventoryValue();

    return 0;
}