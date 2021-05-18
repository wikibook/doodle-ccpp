#include <stdio.h>

int plus(int a, int b) {
    return a + b;  // a와 b의 값을 더해 리턴한다.
}

int main() {
    int sum = plus(3, 5);  // plus 함수가 리턴한 값을 sum에 저장한다.
    printf("%d\n", sum);
}
