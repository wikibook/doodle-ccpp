#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i : arr) {
        i++;  // arr의 각 칸에 들어있는 값을 1씩 증가시킨다.
    }
    for (int i : arr) {
        cout << i << ' ';
    }
    cout << endl;
}
