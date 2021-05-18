#include <stdio.h>

int main() {
    int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

    for (int(*pi)[4] = arr; pi < arr + 3; pi++) {
        for (int* pj = *pi; pj < *pi + 4; pj++) {
            printf("%4d", *pj);
        }
        printf("\n");  // 한 행을 출력한 후, 줄 바꿈
    }
}
