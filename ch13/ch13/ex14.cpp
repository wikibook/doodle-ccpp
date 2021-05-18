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
    {
        shared_ptr<MyClass> b = a;
        cout << a->GetX() << endl;
        cout << b->GetX() << endl;
        cout << a.use_count() << endl;
        cout << b.use_count() << endl;
    }
    cout << a->GetX() << endl;
    cout << a.use_count() << endl;
}
