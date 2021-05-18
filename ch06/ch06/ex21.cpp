#include <stdio.h>

void printArr(int parr[4]) {  // void printArr(int *parr)과 같은 말
    for (int i = 0; i < 4; i++) {
        parr[i]++;          // parr == &arr[0]이므로 arr의 내용물이 바뀐다.
    }
}

int main() {
    int arr[4] = { 1, 2, 3, 4 };

    printArr(arr);
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
}
