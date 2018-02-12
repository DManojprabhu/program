#include<stdio.h>
#include<conio.h>
main()
{
int a[50];
int b,i;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
printf("\n%d %d",a[i],i);
}
getch();
 }
