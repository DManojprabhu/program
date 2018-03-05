#include<stdio.h>
#include<conio.h>
main()
{
int a,i,b[20],c=0;
clrscr();
printf("Enter the value:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
c=c+b[i];
}
printf("The sum is :%d",c);
getch();
}
