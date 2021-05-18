#include <iostream>
using namespace std;

class Equals {
public:
    Equals(int value) : value(value) {}
    bool operator()(int x) const {
        return x == value;
    }
private:
    int value;
};

int main() {
    Equals eq(123);

    cout << eq(12) << endl;
    cout << eq(123) << endl;
}
