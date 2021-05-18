#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a = &a;

    printf("ptr_a = %d\n", ptr_a);
    printf("ptr_a + 1 = %d\n", ptr_a + 1);
    printf("ptr_a + 2 = %d\n", ptr_a + 2);
}
