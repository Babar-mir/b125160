#include<iostream>
#include<string>
using namespace std;


class FoodOrder{
private:
    int orderID;
    string foodItem;
    int quantity;
    float price;

public:
    void getInput() {
        cout << "Enter Order ID: ";
        cin >> orderID;
        cin.ignore();
 
        cout << "Enter Food Item: ";
        getline(cin, foodItem);
 
        cout << "Enter Quantity: ";
        cin >> quantity;
 
        cout << "Enter Price (per item): ";
        cin >> price;
    }
    friend void calculateBill(FoodOrder f1);
};  

void calculateBill(FoodOrder f){
    float totalBill = f.price*f.quantity;
    cout << "\n----- Order Details -----" << endl;
    cout << "Order ID  : " << f.orderID << endl;
    cout << "Food Item : " << f.foodItem << endl;
    cout << "Quantity  : " << f.quantity << endl;
    cout << "Price     : " << f.price << endl;
    cout << "Total Bill: " << totalBill << endl;

}
int main(){

    int n;
    cout << "How many orders do you want to enter? ";
    cin >> n;
    cin.ignore();
 
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Order " << (i + 1) << ":" << endl;
        FoodOrder order;
        order.getInput();
        calculateBill(order);
    }
 
    return 0;

}