#include <stdio.h>

int main() {
    int arr[5] = { 1, 3, 5, 7, 9 };

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d\n", arr[i]);
    }
}
