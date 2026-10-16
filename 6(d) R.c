//c prgrm for fibonacci series using recursion

#include<stdio.h>
int fib(int n)
{
  if(n==0)
  return 0;

  if(n==1)
  return 1;

 return fib(n-1)+fib(n-2);
}
int main()
{
 int N,i;

  printf("Enter Nth term for fibonacci series:");
  scanf("%d",&N);

  printf("Fibonacci series upto %d is\n",N);

  for(i=0;i<N;i++)
  {
   printf("%d",fib(i));
  }
  return 0;

}
