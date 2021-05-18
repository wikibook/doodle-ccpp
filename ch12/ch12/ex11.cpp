#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

class Shape {
public:
    virtual ~Shape() {}
    virtual double GetArea() const = 0;
    virtual void Resize(double factor) = 0;
};

class Circle : public Shape {
public:
    Circle(double r) : r(r) {}

    double GetArea() const {
        return r * r * PI;
    }

    void Resize(double factor) {
        r *= factor;
    }

private:
    double r;
};

class Rectangle : public Shape {
public:
    Rectangle(double a, double b) : a(a), b(b) {}

    double GetArea() const {
        return a * b;
    }

    void Resize(double factor) {
        a *= factor;
        b *= factor;
    }

private:
    double a, b;
};

int main() {
    // Shape를 가리키는 포인터 배열을 통해 두 종류의 도형을 배열에 한꺼번에 담을 수 있다.
    Shape* shapes[] = { new Circle(1), new Rectangle(1, 2) };

    for (Shape* s : shapes) {
        s->Resize(2);  // 각 도형을 2배씩 확대한다.
    }

    for (Shape* s : shapes) {
        cout << s->GetArea() << endl;  // 각 도형의 넓이를 출력한다.
    }

    for (Shape* s : shapes) {
        delete s;
    }
}
