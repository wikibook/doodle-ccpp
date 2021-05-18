#include <stdio.h>

int main() {
    char ch;

    while (true) {
        ch = getchar();
        if (ch == '\n') break;  // ch∞° '\n'¿œ ∂ß break
        putchar(ch);
    }
}
