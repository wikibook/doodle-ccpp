#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string greeting;

    cout << "이름 입력: ";
    cin >> name;

    greeting = "안녕하세요, " + name + " 님!";

    cout << greeting << endl;
    cout << name << "은 총 " << name.length() << "글자입니다." << endl;
    cout << name << "의 첫 글자는 " << name[0] << "입니다." << endl;
}
