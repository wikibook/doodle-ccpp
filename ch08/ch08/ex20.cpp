#include <stdio.h>
#include <string.h>

int main() {
    int a;
    printf("정수 입력 : ");
    scanf("%d", &a);

    char sa[10];
    sprintf(sa, "%d", a);  // 정수 a가 문자열 sa로 변환된다.

    int len = strlen(sa);  // 문자열 sa의 길이가 바로 a의 자릿수와 같다.
    printf("%d은(는) %d자리 수입니다.\n", a, len);
}
