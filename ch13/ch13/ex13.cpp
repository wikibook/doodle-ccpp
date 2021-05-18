#include <iostream>
#include <memory>  // 스마트 포인터가 선언된 라이브러리
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
    unique_ptr<MyClass> a(new MyClass(5));
    cout << a->GetX() << endl;
    cout << "===== 1 =====" << endl;
    a.reset(new MyClass(7));
    cout << a->GetX() << endl;
    cout << "===== 2 =====" << endl;
    a.reset();  // a가 가리키던 객체만 해제하고 아무것도 새로 가리키지는 않음
    cout << "===== 3 =====" << endl;
    a.reset(new MyClass(9));
    cout << "===== 4 =====" << endl;
}
