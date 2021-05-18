#include <stdio.h>

struct ProductInfo {
    int num;
    char name[100];
    int cost;
};

int main() {
    ProductInfo myProduct = { 4797283, "¡¶¡÷ «—∂Û∫¿", 19900 };

    printf("%d\n", sizeof(myProduct));
    printf("%d\n", &myProduct);
    printf("%d\n", &myProduct.num);
    printf("%d\n", myProduct.name);
    printf("%d\n", &myProduct.cost);
}
