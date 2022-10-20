#include<stdio.h>
int main()
{
    int a ;
    float b;
    char c;
    char name[10];
    printf("enter the values= ");
    scanf ("%d%f%c%s",&a,&b,&c,&name);
    printf("a=%d b=%f c=%c name=%s" ,a,b,c,name);
}