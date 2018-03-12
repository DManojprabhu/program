#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,r;
printf("Enter n:");
scanf("%d",&n);
printf("\n Enter l and r:");
scanf("%d%d",&l,&r);
if(l<n<r)
printf("Present");
else
printf("Not present");
getch();
}
