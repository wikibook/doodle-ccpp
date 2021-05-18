#include <stdio.h>

void swap(int* px, int* py) {
    int tmp = *px;  // px가 가리키는 변수의 값을 tmp에 넣고
    *px = *py;      // py가 가리키는 변수의 값을 px가 가리키는 변수에 넣고
    *py = tmp;      // tmp의 값을 py가 가리키는 변수에 넣는다.
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a=%d, b=%d\n", a, b);
}
