#include <iostream>
using namespace std;

class Ice {
public:
    Ice() { cout << "Ice()" << endl; }
    ~Ice() { cout << "~Ice()" << endl; }
};

class Pat {
public:
    Pat() { cout << "Pat()" << endl; }
    ~Pat() { cout << "~Pat()" << endl; }
};

class Bingsoo {
public:
    Bingsoo() { cout << "Bingsoo()" << endl; }
    ~Bingsoo() { cout << "~Bingsoo()" << endl; }

private:
    Ice ice;
};

class PatBingsoo : public Bingsoo {
public:
    PatBingsoo() { cout << "PatBingsoo()" << endl; }
    ~PatBingsoo() { cout << "~PatBingsoo()" << endl; }

private:
    Pat pat;
};

int main() {
    cout << "===== 1 =====" << endl;
    PatBingsoo* p = new PatBingsoo;
    cout << "===== 2 =====" << endl;
    delete p;
    cout << "===== 3 =====" << endl;
}
