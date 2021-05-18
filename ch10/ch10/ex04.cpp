#include <iostream>
using namespace std;

namespace doodle {
    int n;
    void set() {
        n = 20;
    }
}

int main() {
    using namespace doodle;

    set();
    cout << n << endl;
}
