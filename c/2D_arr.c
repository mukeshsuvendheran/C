#include<stdio.h>
int main()
{

    int a[2][2]={{10,20},{40,50}};
    int r,c;
    printf("THE VALUES:");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
     //   printf("a[%d][%d]=a[%d]\n",r,c,a[r][c]);
        printf("%d\n",a[r][c]);
    }


}

