#include <stdio.h>

int main() {
    int n;
    printf("���� �Է� : ");
    scanf("%d", &n);

    if (n % 2 == 0) {  // 2�� ���� �������� 0�̸� ¦��
        printf("n�� ¦���Դϴ�.\n");
    }
    if (n % 2 == 1) {  // 2�� ���� �������� 1�̸� Ȧ��
        printf("n�� Ȧ���Դϴ�.\n");
    }
}
