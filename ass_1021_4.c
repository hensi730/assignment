//Reverse a given string
#include<stdio.h>
#include<string.h>
int main()
{
  char str[20]="Hello";
  int i,len=strrev(str);
  printf("Reverse:");
  for(i=len-1;i>=0;i--)
  {
    printf("%c",str[i]);
  }
  return 0;
}
