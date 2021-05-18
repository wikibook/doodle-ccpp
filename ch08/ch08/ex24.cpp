#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        int n;
        scanf("%d", &n);
        if (n < 0) {   // 음수가 입력되면
            printf("INPUT ERROR\n");
            return 0;  // 프로그램을 바로 종료한다.
        }
        sum += n;
    }
    printf("합: %d\n", sum);  // for문 안에서 한 번도 종료되지 않은 경우 합계를 출력
}
