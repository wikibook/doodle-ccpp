#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

int main() {
    ProductInfo myProduct = { 4797283, "���� �Ѷ��", 19900 };
    ProductInfo* ptr_product = &myProduct;  // myProduct�� ����Ű�� ������ ptr_product

    printf("��ǰ ��ȣ : %d\n", (*ptr_product).num);
    printf("��ǰ �̸� : %s\n", (*ptr_product).name);
    printf("��ǰ ���� : %d��\n", (*ptr_product).cost);
}