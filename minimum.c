#include<stdio.h>
void main()
{
int array[100],minimum,size,c,location=1;
clrscr();
printf("enter the number of elements in an array\n");
scanf("%d",&size);
printf("enter %d integer\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
minimum=array[0];
for(c=1;c<size;c++)
{
if(array[c]<minimum)
{
minimum=array[c];
location=c+1;
}
}
printf("minimum element is present at location %d and its value is %d.\n",location,minimum);
getch();
}
