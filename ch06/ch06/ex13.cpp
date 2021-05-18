#include <stdio.h>

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

int main() {
    walkSquare();
}
