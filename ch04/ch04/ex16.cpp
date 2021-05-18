#include <stdio.h>

int main() {
    int n;

    printf("자연수 입력: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1부터 %d까지의 합: %d\n", n, sum);
}
