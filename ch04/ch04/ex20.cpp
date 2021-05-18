#include <stdio.h>

int main() {
    for (int i = 1; ; i++) {
        int k;

        scanf("%d", &k);
        if (k == 0) {  // 입력받은 수 k가 0이라면 for문 밖으로 빠져나옴
            break;
        }
        printf("%d번째 입력 결과: %d\n", i, k);
    }
}
