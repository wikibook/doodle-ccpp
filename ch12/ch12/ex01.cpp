#include <iostream>
using namespace std;

class Animal {
public:
    void Breathe() { cout << "숨을 쉰다." << endl; }
    int age;
};

class Dog : public Animal {
public:
    void Walk() { cout << "걷는다." << endl; }
};

class Sparrow : public Animal {
public:
    void Fly() { cout << "난다." << endl; }
};

int main() {
    Dog d;
    d.age = 7;
    d.Breathe();
    d.Walk();
    cout << d.age << endl;

    Sparrow s;
    s.age = 2;
    s.Breathe();
    s.Fly();
    cout << s.age << endl;
}
