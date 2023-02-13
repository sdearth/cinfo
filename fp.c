#include <stdio.h>

void func1(void) {
    printf("you're in func1\n");
}

void func2(void) {
    printf("you're in func2\n");
}

void func3(void) {
    printf("you're in func3\n");
}

void func4(void (*)(void));

typedef void (*fp)(void);

int main(void) {
    //function names are the addresses of the function
    fp function_array[3] = {func1, func2, func3};
    void (*myarray[3])(void) = {func1, func2, func3};

    function_array[2]();
    myarray[1]();

    func4(myarray[0]);
}

void func4(void (*f)(void)) {
    f();
}



