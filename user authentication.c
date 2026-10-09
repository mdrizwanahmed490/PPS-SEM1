//write a c program to check for user authentication.(Given UID,PWD)
#include<stdio.h>
int main()
{
int uid,upwd,sid,spwd;

sid=490;
spwd=123;

printf("enter uid,upwd in numbers");
scanf("%d %d", &uid,&upwd);

if ((uid==sid)&&(upwd==spwd))
   printf("LOGIN SUCCESSFUL");
else
   printf("INVALID CREDENTIALS");
}
