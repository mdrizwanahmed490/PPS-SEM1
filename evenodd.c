//check the password is correct or incorrect
#include<stdio.h>
int main()
{
  int password;
  printf("enter a password:");
  scanf("%d",&password);
  if(password==keep_it_safe)
  printf("%d is correct",password);
  else
  printf("%d is incorrect",password);
}
