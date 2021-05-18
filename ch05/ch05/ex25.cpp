#include <stdio.h>

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < 10; i++) {
        printf("arr[%d]ÀÇ ÁÖ¼Ò : %d\n", i, &arr[i]);
    }
}
