#include <iostream>
using namespace std;

struct Animal {
    float xpos = 1;
    float ypos = 2;
};

struct FlyingAnimal : public Animal {
    float zpos = 3;
};

void printAnimals(Animal* a, int n) {  // Animal *a는 Animal a[]와 같다.
    for (int i = 0; i < n; i++) {
        cout << "(" << a[i].xpos << ", " << a[i].ypos << ")" << endl;
    }
}

int main() {
    FlyingAnimal* arr = new FlyingAnimal[5];
    printAnimals(arr, 5);
    delete[] arr;
}
