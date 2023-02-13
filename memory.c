#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    int age;
} person;

void print_person(person *p) {
    fprintf(stdout, "%s is %d years old.\n", p->name, p->age);
}

int main(void) {
    person me = {"Steve", 54};
    void *clone = malloc(sizeof(person));
    if (!clone) {
        printf("failed\n");
        return 1;
    }

    memcpy(clone, &me, sizeof(person));
    print_person(clone);
    free(clone);

    return 0;
}