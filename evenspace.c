#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[30];
	int n,i;
	
	scanf("%s",s);
	n=strlen(s);
	if(n%2==0)
	{
		s[n/2]='*';
		s[(n/2)-1]='*';
	}
	else
	{
		s[n/2]='*';
	}
	printf("\n%s",s);
	getch();
}
