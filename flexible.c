#include <stdlib.h>
#include <stdio.h>

/*
 * demonstrates the use of flexible arrays. An array as the 
 * last member of a struct can omit the size and allocate it at
 * runtime.
 */
typedef struct {
    int value;
    int ar[];
} mystruct;

int main(void) {
    mystruct *ms;
    ms = malloc(sizeof(mystruct) + sizeof(int) * 15);
    if (!ms) {
        return 1;
    }

    ms->value = 15;
    for (int i = 0; i < 15; i++) {
        ms->ar[i] = i;
    }
    for (int i = 0; i < 15; i++) {
        printf("%d\n", ms->ar[i]);
    }
    free(ms);
}