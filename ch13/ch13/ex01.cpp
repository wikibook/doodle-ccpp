#include <iostream>
#include <string>
using namespace std;

class Vector2 {
public:
    Vector2() : x(0), y(0) {}
    Vector2(float x, float y) : x(x), y(y) {}
    float GetX() const { return x; }
    float GetY() const { return y; }
    Vector2 operator+(const Vector2 other) const {
        return Vector2(x + other.x, y + other.y);
    }
    Vector2 operator-(const Vector2 other) const {
        return Vector2(x - other.x, y - other.y);
    }
    Vector2& operator+=(const Vector2 other) {
        x += other.x;
        y += other.y;
        return *this;
    }
    Vector2& operator-=(const Vector2 other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

private:
    float x, y;
};

template<typename T>
T getArraySum(const T arr[], int n) {
    T sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int     iarr[5] = { 3, 1, 4, 1, 5 };
    double  darr[5] = { 3.5, 1.2, 4.3, 1.1, 5.7 };
    Vector2 varr[3] = { Vector2(1, 2), Vector2(3, 4), Vector2(5, 6) };
    string  sarr[3] = { "hello", "world", "doodle" };

    int     isum = getArraySum<int>(iarr, 5);  // 템플릿 인수 명시(타입 유추 안 함)
    double  dsum = getArraySum<double>(darr, 5);
    Vector2 vsum = getArraySum(varr, 3);       // 템플릿 인수 생략(타입 유추)
    string  ssum = getArraySum(sarr, 3);

    cout << isum << endl;
    cout << dsum << endl;
    cout << vsum.GetX() << ", " << vsum.GetY() << endl;
    cout << ssum << endl;
}
