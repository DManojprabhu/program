#include<stdio.h>
#include<conio.h>
main()
{
int a;
//char one,two,three,four,five,six,seven,eight,nine,ten;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
//if(a>=1)&&(a<=10)
if(a==1)
printf("\none");
else if(a==2)
printf("\ntwo");
else if(a==3)
printf("\nthree");
else if(a==4)
printf("\nFour");
else if(a==5)
printf("\nfive");
else if(a==6)
printf("\nsix");
else if(a==7)
printf("\nSeven");
else if(a==8)
printf("\nEight");
else if(a==9)
printf("\nNine");
else if(a==10)
printf("\nTen");
else
printf("\nEnter the number from 1 to 10" );
getch();
}
