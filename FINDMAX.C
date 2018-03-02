#include<stdio.h>
#include<conio.h>
void main()
{
int c[10000],b,n,i,j;
printf("enter the number:\t");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d\t",&c[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
	if(c[i]>c[j])
	{
		b=c[i];
		c[i]=c[j];
		c[j]=b;

	}
}
}
printf("%d\n%d\n",c[0],c[n-1]);}

getch();
}
