#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=123;
    char buf[5];
    printf("%d\n",a);
    sprintf(buf,"%d\n",a);
    printf("%s",buf);
}