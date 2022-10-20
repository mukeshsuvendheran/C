#include<stdio.h>
int main()
{
    int a[]={10,20,30,40};
    int *p,i;
    p = a;
    for(i=0;i<4;i++)
    {
        printf("%d in address %p\n",*p,p);
        //p = p+1;
    }
}