#include<stdio.h>
#include<math.h>
#INCLUDE<conio.h>
int main()
{
int a,b,x,g=0,y,z,i;
clrscr();
scanf("%d%d",&a,&b);
x=a;
while(x<=b)
{
for(i=0;x>10;i++)
{
y=x%10;
z=x/10;
g=g+pow(y,3);
}
g=g+pow(z,3);
if(g==x)
{
printf("%d",g);
}
x++;
}
return 0;
}
