#include<stdio.h>
void main()
{
 int num,product=1,digit;
 printf("enter the number:");
 scanf("%d",&num);
 while(num!=0)
 {
  digit=num%10;
  num=num/10;
  product=product*digit;
  }
  printf("the product of digit is %d",product);
  getch();
  }
