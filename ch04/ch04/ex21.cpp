#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) continue;  // i가 3의 배수라면 현재 루프를 건너뜀
        printf("%d \n", i);
    }
}
