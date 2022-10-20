  #include<stdio.h>
  int main()
  {
      int a[3][3];
      int r,c;
      for(r=0;r<3;r++)
      {
          for(c=0;c<3;c++)
          scanf("%d",&a[r][c]);
      }
      printf("matrix:\n");
       for(r=0;r<3;r++)
      {
          for(c=0;c<3;c++)
         // printf("%d\t",a[r][c]);
          printf("a[%d][%d]=[%d]\t",r,c,a[r][c]);
          printf("\n");
      }

  }