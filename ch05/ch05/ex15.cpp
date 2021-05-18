#include <stdio.h>
#include <string.h>

int main() {
    char greeting[100] = "Hello, ";  // 인사말을 저장할 배열
    char name[100];                  // 이름을 입력받을 배열

    scanf("%s", name);

    strcat(greeting, name);  // greeting에 name의 내용물을 이어 붙인다.
    strcat(greeting, "!");   // greeting에 "!"라는 상수형 문자열을 이어 붙인다.

    printf("%s", greeting);
}
