#include <iostream>
using namespace std;

class Complex {
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(double real_, double imag_) {
        real = real_;
        imag = imag_;
    }

    double GetReal() {
        return real;
    }
    void SetReal(double real_) {
        real = real_;
    }

    double GetImag() {
        return imag;
    }
    void SetImag(double imag_) {
        imag = imag_;
    }

private:
    double real;
    double imag;
};

int main() {
    Complex c1;  // Complex() 호출
    Complex c2 = Complex(2, 3);  // Complex(double, double) 호출
    Complex c3(2, 3);  // Complex(double, double) 호출

    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
    cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
}
