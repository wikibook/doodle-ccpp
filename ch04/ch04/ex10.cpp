#include <stdio.h>

int main() {
    int choice;

    printf("새 게임: 1\n");
    printf("불러오기: 2\n");
    printf("설정: 3\n");
    printf("크레딧: 4\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("새 게임.\n");
    case 2:
        printf("불러오기.\n");
    case 3:
        printf("설정.\n");
    case 4:
        printf("크레딧.\n");
    default:
        printf("잘못 입력하셨습니다.\n");
    }
}
