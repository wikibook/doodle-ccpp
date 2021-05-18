#include <stdio.h>

int main() {
    int n;
    printf("숫자 입력 : ");
    scanf("%d", &n);

    if (n > 0) {  // 양수인지 확인
        printf("n은 양수입니다.\n");
    }
    else if (n == 0) {  // 양수가 아니라면 0인지 확인
        printf("n은 0입니다.\n");
    }
    else {  // 양수도 아니고 0도 아니라면 음수다.
        printf("n은 음수입니다.\n");
    }
}
