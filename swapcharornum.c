#include<stdio.h>
#include<conio.h>
main()
{
int a,b,temp0,m;
char c,d,temp1;
clrscr();
printf("Enter 1 if you want to swap a number else for char press 0:");
scanf("%d",&m);
if(m==1)
{
printf("Enter the 2 values:");
scanf("%d%d",&a,&b);
printf("the values before swap:%d%d",a,b);
temp0=a;
a=b;
b=temp0;
}
else
{
printf("Enter the character to swap:");
scanf("%s%s",c,d);
printf("the values after swap:%s%s",c,d);
temp1=c;
c=d;
d=temp1;
}
if(m==1)
{
printf("the values after swapping is:%d%d",a,b);
}
if(m==0)
{
printf("The values after swapping:%s%s",c,d);
}
getch();
}


