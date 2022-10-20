#include<stdio.h>
int main()
{
    int i;
    int j;
    for(i=0;i<8;i++)
    {
       printf("%d\n",i);
       {
           for(j=0;j<8;j++)
           {
               printf("%d\n",j);
           }
       }
    }  
}