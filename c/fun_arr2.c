#include<stdio.h>
int i;
void fun(int *p)
{
  //int i;
  for(i=0;i<5;i++)
  {
     p[i]=p[i]*10;
  }
}
int main()
{
int a[]={1,3,2,3,4};
//int i;
fun(a);
for(i=0;i<5;i++)
printf("%d\t",a[i]);

}