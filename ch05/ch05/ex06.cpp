#include <stdio.h>

int main() {
    int n;
    int arr[1000];

    printf("�Է��� ������ ���� : ");
    scanf("%d", &n);
    printf("���� %d���� �Է��ϼ��� : ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // 2�� ���� �������� 0�̶�� ¦���̹Ƿ�
            cnt++;              // cnt�� 1 ������Ų��.
        }
    }

    printf("¦���� ���� : %d\n", cnt);
}