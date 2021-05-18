#include <iostream>
using namespace std;

struct Base {
    int a = 1;
    virtual ~Base() {}
};
struct Drv1 : Base {
    float x = 3.14;
};
struct Drv2 : Base {
    int y = 3;
};

int main() {
    Base* b = new Drv1;
    Drv1* d1 = static_cast<Drv1*>(b);

    cout << d1->x << endl;
    delete b;
}
