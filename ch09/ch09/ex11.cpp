#include <iostream>
using namespace std;

int inventory[8] = { 0 };
int score = 0;

void getItem(int itemId, int cnt = 1, int sc = 0) {
    inventory[itemId] += cnt;  // cnt가 생략된 경우, 아이템 개수는 1만 증가
    score += sc;               // sc가 생략된 경우, score는 변화 없음
}

int main() {
    getItem(6, 5);        // 6번 아이템을 5개 얻음
    getItem(3);           // 3번 아이템을 하나 얻음
    getItem(5, 4, 7000);  // 5번 아이템을 4개 얻고 7000점을 얻음

    // 보유하고 있는 아이템 개수 출력
    for (int i : inventory) {
        cout << i << " ";
    }
    cout << endl;
    cout << "점수 : " << score << endl;
}
