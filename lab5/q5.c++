#include <iostream>
using namespace std;


void modify(int &x, int value)
{
    x = x + value;
}


void modify(float &x, float value)
{
    x = x + value;
}

void modify(int *x, int value)
{
    *x = *x + value;
}

int main()
{
    int a = 10;
    float b = 5.5;
    int c = 20;

    cout << "Before modification:" << endl;
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Pointer integer: " << c << endl;

    modify(a, 5);
    modify(b, 2.5);
    modify(&c, 10);

    cout << "\nAfter modification:" << endl;
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Pointer integer: " << c << endl;

    return 0;
}