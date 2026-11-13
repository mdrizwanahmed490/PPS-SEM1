// c prgrm to find the product of two array elements
#include<stdio.h>
void main()
{
 int M[5],i,s=1;
 //int M[5]={10,20,30,40,50};
 printf("enter 5 values");
 for(i=0;i<5;i++)
   scanf("%d",&M[i]);
 for(i=0;i<5;i++)
 {
 s=s*M[i];
 }
printf("product=%d",s);
}
