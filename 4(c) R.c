//c program to convert decimal to binary

#include<stdio.h>
int main()
{
  long long n,original,bin=0;
  long long rem,i=1;

  printf("Enter the decimal number:");
  scanf("%11d",&n);

  original=n;

  while(n!=0)
  {
   rem=n%2;
   n=n/2;

   bin=bin+(rem*i);
   i=i*10;
  }
  printf("%11d in decimal=%11d in binary",original,bin);

  return 0;
  }



