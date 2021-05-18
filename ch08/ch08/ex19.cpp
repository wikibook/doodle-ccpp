#include <stdio.h>

int main() {
    char sa[] = "123";
    int a;

    sscanf(sa, "%d", &a);  // 문자열 sa가 정수 a로 변환된다.
    printf("%d", a);
}
