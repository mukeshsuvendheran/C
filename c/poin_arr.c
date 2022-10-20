#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p,i;
    p=a;
    printf("%d\n",*p);
    printf("%p\n",p);
    for(i=0;i<5;i++) 
    {
         printf("%d address= %p\n",*p,p);
         p=p+1;
    }    
    

}