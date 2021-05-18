#include <stdio.h>

struct Time {
    int h, m, s;

    int totalSec() {
        return 60 * 60 * h + 60 * m + s;
    }
};

int main() {
    Time t = { 1, 22, 48 };

    printf("%d\n", t.totalSec());  // t의 멤버 함수 호출
}
