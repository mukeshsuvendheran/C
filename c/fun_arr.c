#include<stdio.h>
//int size;
int n;
void fun(int arr[])
{
  int i;
  for(i=0;i<n;i++)
     printf("%d\t",arr[i]);
}  
int main()
{
    int a[30],i;
    printf("enter max value:");
    scanf("%d",&n);
    printf("enter value:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
       //size = 4;
    fun(a);

}

