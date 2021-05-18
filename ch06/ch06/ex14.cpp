#include <stdio.h>

// 함수 프로토타입 선언
void walk(int distance);
void rotate(int angle);
void walkSquare();

// main 함수 정의
int main() {
    walkSquare();  // 위에서 walkSquare 함수가 정의되었으므로 에러가 나지 않는다!
}

// 위의 세 함수의 정의
void walk(int distance) {
    printf("%dcm 앞으로 전진했습니다.\n", distance);
}

void rotate(int angle) {
    printf("%d도 회전했습니다.\n", angle);
}

void walkSquare() {
    for (int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
