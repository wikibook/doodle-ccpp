#include <iostream>
using namespace std;

int main() {
    int* a = new int(5);

    cout << a << endl;
    cout << *a << endl;
    *a = 10;
    cout << a << endl;
    cout << *a << endl;

    delete a;
}
