#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[100];
int alp=0,num=0,i,m;
clrscr();
printf("please enter something!!");
scanf("%s",a);
//int i,m;
m=strlen(a);
for(i=0;i<m;i++)
{
if(('a'<=a[i]&&a[i]<='z')||('A'<=a[i]&&a[i]<='Z'))
{
alp=1;
}
if('0'<=a[i]&&a[i]<='9')
{
num=1;
}
}
if(alp==1&&num==1)
printf("yes it contains number and character!!");
else
printf("it does not contains number and character");
getch();
}
