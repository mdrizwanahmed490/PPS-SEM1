//write a c program to generate the following patterns
#include<stdio.h>
void main()
{
int i,j,N;
printf("Enter the size of N");
scanf("%d",&N);
printf("Pattern upto %d rows is \n",N);
for(i=1;i<=N;i++)
{
 for(j=1;j<=i;j++)
 {
 printf("%d",j);
 }
 printf("\n");
}

}
