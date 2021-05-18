#include <stdio.h>

int main() {
    int a = 10;
    int* ptr_a = &a;
    int** ptr_ptr_a = &ptr_a;  // 더블 포인터 선언

    printf("1. a = %d\n", a);
    printf("2. &a = %d\n", &a);
    printf("3. ptr_a = %d\n", ptr_a);
    printf("4. &ptr_a = %d\n", &ptr_a);
    printf("5. ptr_ptr_a = %d\n", ptr_ptr_a);
    printf("6. *ptr_ptr_a = %d\n", *ptr_ptr_a);
    printf("7. **ptr_ptr_a = %d\n", **ptr_ptr_a);
}
