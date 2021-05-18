#include <stdio.h>

int main() {
    int n;

    printf("자연수 입력: ");
    scanf("%d", &n);

    int i, pow;
    for (i = 1, pow = 1; i <= n; i++, pow *= 2);
    printf("2의 %d제곱은 %d\n", n, pow);
}
