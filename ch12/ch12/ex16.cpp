#include <iostream>
#include <math.h>
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
    double GetDiag() const {
        return sqrt(a * a + b * b);
    }

private:
    double a, b;
};

int main() {
    Shape* shapes[] = { new Circle(1), new Rectangle(1, 2) };

    for (int i = 0; i < 2; i++) {
        cout << "도형의 넓이 : " << shapes[i]->GetArea() << endl;
        Rectangle* r = dynamic_cast<Rectangle*>(shapes[i]);
        if (r != NULL) {  // 성공적으로 형변환되었다면
            cout << "대각선의 길이 : " << r->GetDiag() << endl;
        }
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }
}
