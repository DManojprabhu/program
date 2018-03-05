#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
if(a%2==0)
printf("The even number is:%d",a);
else
printf("The nearest even number is:%d",a-1);
}
