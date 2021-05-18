#include <stdio.h>

int main() {
    int n;

    printf("자연수 입력: ");
    scanf("%d", &n);

    for (; n >= 1; n--) {  // 초기 조건을 생략
        printf("%d ", n);
    }
}
