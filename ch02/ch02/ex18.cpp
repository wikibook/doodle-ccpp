#include <stdio.h>

int main() {
    int a = 30, b = 50;

    bool p = a > b;
    bool q = a < b;
    bool r = a == b;

    printf("%d은(는) %d보다 크다: %d\n", a, b, p);
    printf("%d은(는) %d보다 작다: %d\n", a, b, q);
    printf("%d은(는) %d과(와) 같다: %d\n", a, b, r);
}
