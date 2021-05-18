#include <iostream>
using namespace std;

void f(int a = 1) {
    cout << a << endl;
}

int main() {
    f(123);  // a에 123이 들어간다.
    f();     // a에 기본값인 1이 들어간다.
}
