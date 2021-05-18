#include <stdio.h>

int main() {
    int arr[3] = { 1, 2, 3 };
    int(*p_arr)[3] = &arr;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", (*p_arr)[i]);
    }
}
