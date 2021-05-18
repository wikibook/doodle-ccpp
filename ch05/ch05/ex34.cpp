#include <stdio.h>

int main() {
    char str[4][10] = { "hello", "world", "doodle", "google" };
    char* ptr[4];

    for (int i = 0; i < 4; i++) {
        ptr[i] = str[i];
    }
    for (int i = 0; i < 4; i++) {
        printf("%s\n", ptr[i]);
    }
}
