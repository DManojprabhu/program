#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int lower,upper;
printf("enter the alphabet");
scanf("%c",&a);
lower=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
upper=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
if(lower||upper)
printf("%c is a vowel",a);
else
printf("%c is a constant",a);
getch();
}
