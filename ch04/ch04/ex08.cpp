#include <stdio.h>

int main() {
    int choice;

    printf("새 게임: 1\n");
    printf("불러오기: 2\n");
    printf("설정: 3\n");
    printf("크레딧: 4\n");
    scanf("%d", &choice);

    if (choice == 1)
        printf("새 게임.\n");
    else if (choice == 2)
        printf("불러오기.\n");
    else if (choice == 3)
        printf("설정.\n");
    else if (choice == 4)
        printf("크레딧.\n");
    else
        printf("잘못 입력하셨습니다.\n");
}
