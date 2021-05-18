#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a;  // 포인터 선언
    ptr_a = &a;  // ptr_a에 a의 주솟값 저장

    printf("a의 값 : %d\n", a);
    printf("a의 주솟값 : %d\n", &a);
    printf("ptr_a의 값 : %d\n", ptr_a);
}
