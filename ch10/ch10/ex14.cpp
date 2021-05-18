#include <iostream>
using namespace std;

/****************** 클래스 정의 ******************/

class Vector2 {
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const;
    float GetY() const;
    static Vector2 Sum(Vector2 a, Vector2 b);  // 정적 메서드 선언
    Vector2 Add(Vector2 other);                // 일반 메서드 선언

private:
    float x, y;
};
Vector2 Sum(Vector2 a, Vector2 b);             // 전역 함수 선언

/****************** main 함수 ******************/

int main() {
    Vector2 a(2, 3), b(5, 6);
    Vector2 c1 = Sum(a, b);           // 전역 함수 호출
    Vector2 c2 = Vector2::Sum(a, b);  // 정적 메서드 호출
    Vector2 c3 = a.Add(b);            // 일반 메서드 호출

    cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
    cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
    cout << "c3 = (" << c3.GetX() << ", " << c3.GetY() << ")" << endl;
}

/****************** 함수 정의 ******************/

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
// 정적 메서드 정의
// Tip: 정적 메서드의 정의에서는 static 키워드를 붙일 필요가 없다.
Vector2 Vector2::Sum(Vector2 a, Vector2 b) {
    return Vector2(a.x + b.x, a.y + b.y);
}
// 일반 메서드 정의
Vector2 Vector2::Add(Vector2 other) {
    return Vector2(x + other.x, y + other.y);
}
// 전역 함수 정의
Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}
