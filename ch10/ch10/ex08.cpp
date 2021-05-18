#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {  // 생성자
        cout << "생성자가 호출되었다!!" << endl;
    }
    ~MyClass() {  // 소멸자
        cout << "소멸자가 호출되었다!!" << endl;
    }
};

MyClass globalObj;  // 전역 객체(주석 해제)

void testLocalObj() {
    cout << "=== testLocalObj 함수 시작 ===" << endl;
    // MyClass localObj;  // 지역 객체(주석 처리)
    cout << "=== testLocalObj 함수 끝 ===" << endl;
}

int main() {
    cout << "=== main 함수 시작 ===" << endl;
    testLocalObj();
    cout << "=== main 함수 끝 ===" << endl;
}
