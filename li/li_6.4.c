#include <stdio.h>
int main()
{
  int a[2][3] = {{1,2,3},{4,5,6}},b[3][2],i,j;
  printf("array a:\n");
  for(i=0;i<=1;i++)
    {
      for(j=0;j<=2;j++)
	{
	  printf("%5d\t",a[i][j]);
	  b[j][i]=a[i][j];
	}
      printf("\n");
    }
  printf("array b:\n");
  for(i=0;i<=2;i++)
    {
      for(j=0;j<=1;j++)
	printf("%d\t",b[i][j]);
      printf("\n");
    }
  return 0;
}
