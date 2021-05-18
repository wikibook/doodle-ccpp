#include <stdio.h>

void rec() {
    printf("rec() »£√‚µ \n");
    rec();
}

int main() {
    rec();
}
