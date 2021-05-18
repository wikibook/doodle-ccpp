#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    Item() { }
    Item(int num) : num(num) { }
    Item(string name) : name(name) { }
    Item(int num, string name) : num(num), name(name) { }

    operator int() const {
        cout << "Item::operator int()" << endl;
        return num;
    }
    operator string() const {
        cout << "Item::operator string()" << endl;
        return name;
    }

private:
    int num;
    string name;
};

int main() {
    Item i1(1, "Stone");
    int inum = i1;      // int inum = (int)i1;
    string iname = i1;  // string iname = (string)i1;

    cout << inum << endl;
    cout << iname << endl;
}
