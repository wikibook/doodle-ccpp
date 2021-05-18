#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {  // 별표를 n번 출력한다.
            printf("*");
        }
        printf("\n");  // 별표를 n개 출력했으면 줄 바꿈한다.
    }
}
