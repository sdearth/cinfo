#include <stdio.h>
#include <string.h>

typedef struct {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigrecord, *sig_ptr;


int main(void)
{
    sigrecord sigline;
    sig_ptr sigline_ptr = &sigline;

    sigline_ptr->signum = 5;
    strcpy(sigline_ptr->signame, "SIGINT");
    strcpy(sigline_ptr->sigdesc, "Interrupt from keyboard");
    printf("Signal %d: %s - %s\n", sigline.signum, sigline.signame, sigline.sigdesc);
}