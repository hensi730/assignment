//print the first N natural numbers in reverse.
#include<stdio.h>
int main()
{
  int n,i;
  printf("Entrer N:-");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
     printf("\n    %d\n",i);
  }
return 0;
}
