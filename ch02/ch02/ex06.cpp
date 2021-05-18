#include <stdio.h>

int main() {
    float a = 9.8;
    float b = 3.14;
    float add = a + b;
    float sub = a - b;
    float mul = a * b;
    float div = a / b;

    printf("%f + %f = %f\n", a, b, add);
    printf("%f - %f = %f\n", a, b, sub);
    printf("%f * %f = %f\n", a, b, mul);
    printf("%f / %f = %f\n", a, b, div);
}
