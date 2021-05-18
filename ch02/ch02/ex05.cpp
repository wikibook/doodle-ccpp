#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int add = a + b;  // µ¡¼À
    int sub = a - b;  // »¬¼À
    int mul = a * b;  // °ö¼À
    int div = a / b;  // ¸ò
    int mod = a % b;  // ³ª¸ÓÁö

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %d\n", a, b, div);
    printf("%d %% %d = %d\n", a, b, mod);
}
