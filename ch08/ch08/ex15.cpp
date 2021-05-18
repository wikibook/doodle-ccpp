#include <stdio.h>

int main() {
    FILE* in;
    in = fopen("input.txt", "r");

    char ch;
    while (fscanf(in, "%c", &ch) != EOF) {
        printf("%c", ch);
    }
}
