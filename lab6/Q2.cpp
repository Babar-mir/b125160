#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    void input() { cin >> real >> imag; }
    Complex operator-(const Complex &c )const {
        return Complex(real - c.real, imag - c.imag);
    }
    void display() const {
        cout << real << (imag < 0 ? " - " : " + ") << (imag < 0 ? -imag : imag) << "i";
    }
};

int main() {
    Complex c1, c2;
    cout << "Enter C1 (real imaginary): "; c1.input();
    cout << "Enter C2 (real imaginary): "; c2.input();
    Complex result = c1 - c2;
    cout << "C1 = "; c1.display(); cout << endl;
    cout << "C2 = "; c2.display(); cout << endl;
    cout << "C1 - C2 = "; result.display(); cout << endl;
    return 0;
}