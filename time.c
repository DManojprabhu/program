#include <stdio.h>
#include<conio.h>
void main
{
int n,min,hr;
clrscr();
scanf("%d",&n);
if(n<60)
{
	printf("0 %d",n);
}
else if(n>=60)

{
min=n%60;
hr=n/60;
printf("%d %d",hr,min);
}
getch();
}
