#include<stdio.h>
#include<conio.h>
void main()
{
int b,i;
char a;
clrscr();
printf("Enter the string and the no of times to be printed:");
scanf("%s%d",a,&b);
for(i=0;i<b;i++)
{
printf("%s\n",a);
}
getch();
}
