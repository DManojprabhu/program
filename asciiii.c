#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Enter the value:");
scanf("%d",&a);
if((a>=97)&&(a<=122))
printf("%c",a);
else
printf("Invalid input");
getch();
}
