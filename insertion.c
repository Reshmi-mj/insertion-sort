#include<stdio.h>

int sort(int *a,int size)
{
  int i,j,t;
  for(i=1;i<size;i++)
    {
      for(j=i;j>0&&a[j]<a[j-1];j--)
	{
	  t=a[j];
	  a[j]=a[j-1];
	  a[j-1]=t;
	}
    }
  return 0;
}

int read(int *a)
{
  int size,i;
  printf("Size: ");
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  return size;
}

int main()
{
  int a[100];
  int size = read(a);
  int i;
  sort(a,size);
  printf("Sorted array:\n");
  for(i=0;i<size;i++)
    printf("%d ",a[i]);
  printf("\n");

  return 0;
}


