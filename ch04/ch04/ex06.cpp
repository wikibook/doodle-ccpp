#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {  // if¨ç
        if (b > c) {  // if¨è
            printf("%d %d %d\n", a, b, c);
        }
        else {  // else¨è
            if (a > c) {  // if¨é
                printf("%d %d %d\n", a, c, b);
            }
            else {  // else¨é
                printf("%d %d %d\n", c, a, b);
            }
        }
    }
    else {  // else¨ç
        if (a > c) {  // if¨ê
            printf("%d %d %d\n", b, a, c);
        }
        else {  // else¨ê
            if (b > c) {  // if¨ë
                printf("%d %d %d\n", b, c, a);
            }
            else {  // else¨ë
                printf("%d %d %d\n", c, b, a);
            }
        }
    }
}
