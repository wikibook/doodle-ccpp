#include <stdio.h>
#include <stdlib.h>

// 숫자 5개를 입력받아 그 합을 리턴하는 함수
int getSum() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        int n;

        scanf("%d", &n);
        if (n < 0) {
            printf("INPUT ERROR\n");
            // 이제는 프로그램이 잘 종료된다.
            exit(0);
        }
        sum += n;
    }

    return sum;
}

int main() {
    printf("합: %d\n", getSum());
}
