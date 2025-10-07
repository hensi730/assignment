//Find the smallest of three number
#include<stdio.h>
int main()
{
  int a[10],n,i,max;
  printf("\n Enter array size:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    printf("\n Enter value of a[%d]:",i);
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]<max)
    {
      max=a[i];
    }
  }
    printf("\n Smallest number is:%d\n",max);
  return 0;
}
