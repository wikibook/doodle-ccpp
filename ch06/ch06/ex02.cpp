#include <stdio.h>

int itemCnt = 0;  // 전역 변수
int money = 100;  // 전역 변수

void buyItem() {
    itemCnt++;    // 이제 접근 가능
    money -= 10;
    printf("아이템을 구매했습니다.\n");
    printf("  아이템 개수: %d\n", itemCnt);
    printf("  잔액: %d\n", money);
}

int main() {
    buyItem();

    // (이 부분에는 다른 코드가 많이 있다고 가정합니다.)

    buyItem();
}
