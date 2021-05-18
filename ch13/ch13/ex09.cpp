#include <iostream>
using namespace std;

int square(int n) { return n * n; }             // n의 제곱을 리턴
int myFunc(int n) { return n * (n - 15) / 2; }  // 어떤 다른 함수

int arrFnMin(const int arr[], int n, int (*f)(int)) {
    int min = f(arr[0]);
    for (int i = 1; i < n; i++) {
        if (min > f(arr[i])) min = f(arr[i]);
    }
    return min;
}

int main() {
    int arr[7] = { 3, 1, -4, 1, 5, 9, -2 };

    cout << arrFnMin(arr, 7, square) << endl;  // 제곱의 최소
    cout << arrFnMin(arr, 7, myFunc) << endl;  // myFunc 함수를 적용한 것의 최소
}
