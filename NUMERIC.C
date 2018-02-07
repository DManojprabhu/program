#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
if((a>=0)&&(a<=9))
printf("numeric");
else
printf("not numeric");
getch();
}
