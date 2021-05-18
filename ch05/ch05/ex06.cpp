#include <stdio.h>

int main() {
    int n;
    int arr[1000];

    printf("입력할 숫자의 개수 : ");
    scanf("%d", &n);
    printf("숫자 %d개를 입력하세요 : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // 2로 나눈 나머지가 0이라면 짝수이므로
            cnt++;              // cnt를 1 증가시킨다.
        }
    }

    printf("짝수의 개수 : %d\n", cnt);
}
