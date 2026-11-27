//write a cprgrm using fget(s)function
#include<stdio.h>
int main()
{
   char name[30];
   printf("enter name:");
   fgets(name, sizeof(name), stdin);  //read string
   printf("Name: ");
   puts(name);   //display string
   return 0;


}
