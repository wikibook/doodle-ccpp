#include <stdio.h>

int main() {
    int choice;

    printf("새 게임: 1\n");
    printf("불러오기: 2\n");
    printf("설정: 3\n");
    printf("크레딧: 4\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:  // 세미콜론(;)이 아니라 콜론(:)이다.
        printf("새 게임.\n");
        break;
    case 2:
        printf("불러오기.\n");
        break;
    case 3:
        printf("설정.\n");
        break;
    case 4:
        printf("크레딧.\n");
        break;
    default:
        printf("잘못 입력하셨습니다.\n");
        break;
    }
}
