#include<stdio.h>
void multi_table (int x)
{

   int i;
   for (i=0;i<20;i++)
  {
   printf("%d * %d = %d\n",i,x,i*x);
  }

}
int main()
{
    //int a=5;
    multi_table(5);
}

