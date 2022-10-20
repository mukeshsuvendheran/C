#include<stdio.h>
int main()
{
    int a =0;
    char c = 'A';
    int *p;
    char *cp;
    p = &c;
    cp = &a;
    printf("int pointer p: %c address:%p\n",*p,p);
    printf("char pointer cp:%d address: %p",*cp,cp);
}