#include <iostream>
using namespace std;

struct Person {
    int age;  // 나이
    virtual ~Person() {}  // 다형적 클래스로 만들어주기 위한 가상 소멸자
    void Eat() {
        cout << "먹는다..." << endl;
    }
};
struct Student : virtual Person {  // 가상 상속
    void Study() {
        cout << "공부한다..." << endl;
    }
};
struct Worker : virtual Person {   // 가상 상속
    void Work() {
        cout << "일한다..." << endl;
    }
};
struct Researcher : Student, Worker {

};

int main() {
    Researcher r;
    r.age = 20;

    cout << r.age << endl;
    cout << r.Student::age << endl;
    cout << r.Worker::age << endl;
    cout << r.Person::age << endl;

    r.Eat();
}
