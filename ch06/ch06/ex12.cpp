#include <stdio.h>

void swap(int& x, int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);  // a, b를 입력으로 받는다.

    swap(a, b);             // a, b를 swap 함수에 넣는다.

    printf("a=%d, b=%d\n", a, b);
}
