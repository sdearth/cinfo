#include <stdio.h>

void swap(int*, int*);

int main(void) {
    int a = 21;
    int b = 17;
    void (*swap_ptr)(int*, int*) = &swap;

    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);

    (*swap_ptr)(&a, &b);

    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
    printf("swap: a = %d, b = %d\n", *pa, *pb);
}