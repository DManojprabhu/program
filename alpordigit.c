#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter the input");
scanf("%c",&a);
if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
printf("%c is a alphabet",a);
else
printf("%c is not a alphabet",a);
getch();
}
