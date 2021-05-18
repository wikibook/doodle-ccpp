#include <stdio.h>

void noMeaning() {
    printf("first\n");
    return;  // 함수 바로 종료, 아래 명령들은 실행되지 않는다.
    printf("second\n");
    return;
}

int main() {
    noMeaning();
}
