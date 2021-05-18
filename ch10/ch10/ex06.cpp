#include <iostream>
using namespace std;

class MyClass {
public:
    void PrintThis() {
        cout << "나의 주소는 " << this << endl;
    }

    int x;
};

int main() {
    MyClass a, b;

    cout << "객체 a의 주소는 " << &a << endl;
    cout << "객체 b의 주소는 " << &b << endl;

    a.PrintThis();
    b.PrintThis();
}
