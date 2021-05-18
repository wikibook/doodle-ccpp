#include <stdio.h>

int main() {
    FILE* in;
    FILE* out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    int n;
    fscanf(in, "%d", &n);
    fprintf(out, "%d\n", n);
}
