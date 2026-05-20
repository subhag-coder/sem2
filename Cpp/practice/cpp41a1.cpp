#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r) {
        real = r;
        imag = 0;
    }

    Complex(int r, int i) { 
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex addComplex(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex addComplex(Complex c1, Complex c2) {
        return Complex(real + c1.real + c2.real, imag + c1.imag + c2.imag);
    }

    Complex addComplex(int x) {
        return Complex(real + x, imag);
    }
};

int main() {
    Complex c1;  
    Complex c2(5);
    Complex c3(3, 4);

    cout << "Complex numbers:" << endl;
    c1.display();
    c2.display();
    c3.display();

    cout << "\nAdding two complex numbers (c2 + c3):" << endl;
    Complex sum1 = c2.addComplex(c3);
    sum1.display();

    cout << "\nAdding three complex numbers (c1 + c2 + c3):" << endl;
    Complex sum2 = c1.addComplex(c2, c3);
    sum2.display();

    cout << "\nAdding a complex number and an integer (c3 + 10):" << endl;
    Complex sum3 = c3.addComplex(10);
    sum3.display();

    return 0;
}