#include <stdio.h>

struct ProductInfo {
    int num;
    char name[101];  // name의 크기를 101이라고 해보자.
    int cost;
};

int main() {
    ProductInfo myProduct = { 4797283, "제주 한라봉", 19900 };

    printf("%d\n", sizeof(myProduct));
    printf("%d\n", &myProduct);
    printf("%d\n", &myProduct.num);
    printf("%d\n", myProduct.name);
    printf("%d\n", &myProduct.cost);
}
