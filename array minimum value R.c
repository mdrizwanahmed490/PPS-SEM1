// c prgrm to find the minimum of the given elements


#include<stdio.h>
void main()
{
int M[5],i,min;
printf("enter 5 values");

 for(i=0;i<5;i++)
  scanf("%d",&M[i]);
  {
  for(i=0;i<5;i++)
  if(M[i]<min)
  {
    min=M[i];


  }
  }
  printf("min=%d",min);
}
