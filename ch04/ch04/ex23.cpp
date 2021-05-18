#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {  // i번째 행에 별표를 i번 출력한다.
            printf("*");
        }
        printf("\n");
    }
}
