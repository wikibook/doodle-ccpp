#include <stdio.h>

#define MAIN int main
#define ULL unsigned long long
#define NUM 1234
#define PLUS +
#define PNT printf

MAIN() {  // int main()
    ULL m = NUM PLUS 1;  // unsigned long long m = 1234 + 1;
    PNT("%d", NUM);  // printf("%d", 1234);
}
