#include <stdio.h>

int main() {
    char s[] = "doodle";

    printf("%c\n", s[0]);  // s의 0번 칸 출력
    s[0] = 'g';            // s의 0번 칸을 'g'로 변경
    s[3] = 'g';
    printf("%s\n", s);     // 바뀐 s의 내용물 출력
}
