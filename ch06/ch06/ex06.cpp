#include <stdio.h>

int noMeaning() {
    printf("first\n");
    return 1;
    printf("second\n");
    return 2;
}

int main() {
    int ret = noMeaning();  // noMeaning 함수의 리턴 값을 저장
    printf("%d\n", ret);
}
