#include <stdio.h>

int main() {
    int n;

    printf("�ڿ��� �Է�: ");
    scanf("%d", &n);

    for (; n >= 1; n--) {  // �ʱ� ������ ����
        printf("%d ", n);
    }
}