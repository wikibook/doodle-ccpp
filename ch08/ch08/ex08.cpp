#include <stdio.h>

#define SQUARE(X) ((X) * (X))

int main() {
    int a = 5;

    printf("%d", 100 / SQUARE(a));
}
