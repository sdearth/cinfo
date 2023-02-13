#include <stdio.h>

int negate(int num) {
    return ~num + 1;
}

int main(void) {
    int x = 9;
    int y = negate(x);
    printf("%d (%x)\n", x, x);
    printf("%d (%x)\n", y, y);
}