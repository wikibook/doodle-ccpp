#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a;
    ptr_a = &a;

    printf("a의 값 : %d\n", a);
    printf("a의 주솟값 : %d\n", &a);
    printf("ptr_a의 값 : %d\n", ptr_a);
    printf("ptr_a에 저장된 주소에 저장된 값 : %d\n", *ptr_a);
}
