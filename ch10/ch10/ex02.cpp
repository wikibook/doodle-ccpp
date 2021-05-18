#include <iostream>
using namespace std;

namespace doodle {
    int n;
    void set() {
        n = 20;
    }
}

namespace google {
    void set() {
        doodle::n = 30;
    }
}

int main() {
    doodle::set();
    cout << doodle::n << endl;

    google::set();
    cout << doodle::n << endl;
}
