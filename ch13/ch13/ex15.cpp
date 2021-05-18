#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass(int x) : x(x) {
        cout << "MyClass(int)" << endl;
    }
    ~MyClass() {
        cout << "~MyClass()" << endl;
    }
    int GetX() const { return x; }

private:
    int x;
};

int main() {
    shared_ptr<MyClass> a(new MyClass(5));
    cout << "===== 1 =====" << endl;
    {
        shared_ptr<MyClass> b = a;
        cout << b.use_count() << endl;
        a.reset();
        cout << b.use_count() << endl;
        cout << "===== 2 =====" << endl;
    }
    cout << "===== 3 =====" << endl;
}
