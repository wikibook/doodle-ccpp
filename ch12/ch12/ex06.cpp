#include <iostream>
using namespace std;

class Base {
public:
    int a = 10;
};

class Derived : public Base {
public:
    int a = 20;
};

int main() {
    Base b;
    Derived d;

    cout << b.a << endl;
    cout << d.a << endl;
}
