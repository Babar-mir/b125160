#include <iostream>
using namespace std;

int main() {
    int equipment[6] = {101, 102, 103, 104, 105, 106};

    int *ptr = equipment;

    cout << "Equipment IDs and addresses:\n";

    for (int i = 0; i < 6; i++) {
        cout << "ID: " << *ptr
             << "  Address: " << ptr << endl;

        ptr++;
    }

    return 0;
}