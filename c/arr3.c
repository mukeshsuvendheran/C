#include<stdio.h>
int main()
{
    int a[20],i,max;
    printf("enter the max value:");
    scanf("%d",&max);
    printf("enter the values in below:");
    for(i=0;i<max;i++)
    scanf("%d",&a[i]);
    printf("the values:");
    for(i=0;i<max;i++)
    printf("\t %d",a[i]);

}