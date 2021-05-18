#include <stdio.h>

int fact(int n) {
    if (n == 1) return 1;  // n이 1일 때 1을 리턴한다.
    return n * fact(n - 1);
}

int main() {
    int n;

    printf("정수 입력 : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
}
