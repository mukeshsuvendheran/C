#include<stdio.h>
int main ()
{
    int i=0;
    repeat:
    printf("\n%d",i);
    if(i<=5) 
    i++;
    {
        goto repeat;
    }
}