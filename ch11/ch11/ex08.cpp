#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    Item() {
        cout << "Item()" << endl;
    }
    Item(int num) : num(num) {
        cout << "Item(int)" << endl;
    }
    Item(string name) : name(name) {
        cout << "Item(string)" << endl;
    }
    Item(int num, string name) : num(num), name(name) {
        cout << "Item(int, string)" << endl;
    }

private:
    int num;
    string name;
};

int main() {
    cout << "===== A =====" << endl;
    Item a1 = Item(1);
    Item a2(2);
    Item a3 = (Item)3;
    Item a4 = 4;
    Item a5, a6, a7;
    a5 = Item(5);
    a6 = 6;
    a7 = (Item)7;

    cout << "===== B =====" << endl;
    Item b4 = string("Stone");

    cout << "===== C =====" << endl;
    Item c1 = Item(1, "Stone");
    Item c2(2, "Dirt");
    Item c4 = { 3, "Wood" };
    Item c5, c6;
    c5 = Item(4, "Grass");
    c6 = { 5, "Water" };
}
