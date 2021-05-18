#include <stdio.h>

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int* ptr = arr; ptr < arr + 10; ptr++) {
        printf("%d\n", *ptr);  // 주의: ptr이 아니라 *ptr을 출력한다.
    }
}
