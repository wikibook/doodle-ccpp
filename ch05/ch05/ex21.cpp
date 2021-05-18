#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int* ptr = &a;  // ptr은 처음에는 a를 가리킨다.
    printf("ptr가 가리키는 변수의 값 : %d\n", *ptr);

    ptr = &b;      // 이제 ptr은 b를 가리키게 된다.
    printf("ptr가 가리키는 변수의 값 : %d\n", *ptr);
}
