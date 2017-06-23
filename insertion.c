#include<stdio.h>

int main()
{
  int a[7] = {4,23,43,38,15,10,30},b[7];
  int i,j,t;
  for(i=1;i<7;i++)
    {
      for(j=i;j>0&&a[j]<a[j-1];j--)
	{
	  t=a[j];
	  a[j]=a[j-1];
	  a[j-1]=t;
	}
    }
  printf("Sorted array:\n");
  for(i=0;i<7;i++)
    printf("%d ",a[i]);
  printf("\n");

  return 0;
}


