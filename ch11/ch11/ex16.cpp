#include <stdio.h>

int main() {
    int a = 5;
    printf("a는 원래 %d였다!\n", a);
    a++;   // a += 1;과 같음
    printf("1 증가해서 %d이 됐다!!\n", a);
    a--;   // a -= 1;과 같음
    printf("1 감소해서 %d가 됐다!!!\n", a);
}
