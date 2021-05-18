#include <stdio.h>

int main() {
    int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
    int(*p_row)[4] = &arr[1];

    for (int i = 0; i < 4; i++) {
        printf("%d ", (*p_row)[i]);
    }
    printf("\n");
}
