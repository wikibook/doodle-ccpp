#include <iostream>

using namespace std;

class Weapon {
public:
    Weapon(int power) : power(power) {
        cout << "Weapon(int)" << endl;
    }

    virtual void Use() {  // 가상 함수!!
        cout << "Weapon::Use()" << endl;
    }

protected:
    int power;
};

class Sword : public Weapon {
public:
    Sword(int power) : Weapon(power) {
        cout << "Sword(int)" << endl;
    }

    void Use() {  // 오버라이딩
        cout << "Sword::Use()" << endl;
        swing();
    }

private:
    void swing() {
        cout << "Swing sword." << endl;
    }
};

class Magic : public Weapon {
public:
    Magic(int power, int manaCost) : Weapon(power), manaCost(manaCost) {
        cout << "Magic(int, int)" << endl;
    }

    void Use() {  // 오버라이딩
        cout << "Magic::Use()" << endl;
        cast();
    }

private:
    void cast() {
        cout << "Cast magic." << endl;
    }

    int manaCost;
};

int main() {
    Sword mySword(10);
    Magic myMagic(15, 7);

    Weapon* currentWeapon;

    currentWeapon = &mySword;
    currentWeapon->Use();
}
