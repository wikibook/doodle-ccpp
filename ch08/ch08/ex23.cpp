#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // 현재 시각을 시드 값으로 설정
    for (int i = 1; i <= 5; i++)
        printf("%d\n", rand() % 10 + 1);
}
