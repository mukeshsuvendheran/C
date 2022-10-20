#include<stdio.h>
void modify(int *x)
{
    *x=*x * 10;
}
int main()
{
    int a=10;
    modify(&a);
    printf("%d",a);
    
}