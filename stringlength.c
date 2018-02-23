#include<stdio.h>
#include<conio.h>
main()
{
char a[40],b[40];
int i,d,c;
clrscr();
printf("Enter the first string:");
scanf("%s",a);
printf("Enter the second string:");
scanf("%s",b);
for(i=1;a[i]!='\0';i++)
d=i+1;
for(i=1;b[i]!='\0';i++)
c=i+1;
if(d>c)
printf("The greatest string is:%s",a);
else if(c>d)
printf("the gretest string is :%s",b);
else
printf("%s%s",a,b);
getch();
}

