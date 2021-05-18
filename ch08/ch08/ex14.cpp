#include <stdio.h>

int main() {
    FILE* in;
    FILE* out;
    in = fopen("intput.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL) {
        printf("파일을 여는 데 실패했습니다.\n");
    }
    else {
        int n;
        fscanf(in, "%d", &n);
        fprintf(out, "%d\n", n);
    }
    if (in != NULL) fclose(in);
    if (out != NULL) fclose(out);
}
