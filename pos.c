#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number to be check:");
scanf("%d",&n);
if(n<0)
printf("the given number is negative");
elseif(n=0)
printf("the given number is zero");
else
printf("the given number is positive");
getch();
}
