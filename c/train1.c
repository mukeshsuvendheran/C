#include<stdio.h>
int main()//nested if . i convert "*" into "%d"
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=2;j<=10;j++)
        {
           printf("%d",i,j);
        }
        printf("\n");
        
    }
    printf("\n---------------\n");
}