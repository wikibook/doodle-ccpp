#include <stdio.h>

int main() {
    int n;
    printf("숫자 입력 : ");
    scanf("%d", &n);

    if (n % 2 == 0) {  // 2로 나눈 나머지가 0이면 짝수
        printf("n은 짝수입니다.\n");
    }
    else {  // 그렇지 않으면 홀수
        printf("n은 홀수입니다.\n");
    }
}
