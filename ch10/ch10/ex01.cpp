#include <iostream>
using namespace std;

namespace doodle {
    int n;
    void set() {
        n = 20;
    }
}

namespace google {
    int n;
    void set() {
        n = 30;
    }
}

int main() {
    doodle::set();
    google::set();

    cout << doodle::n << endl;
    cout << google::n << endl;
}
