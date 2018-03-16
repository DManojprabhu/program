#include <stdio.h>
void main() 
{
	int kabali,opponent,i;
	
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&kabali,&opponent);
	if(kabali>opponent)
	{
		printf("\n%d",kabali-opponent);
	}
	else
	{
		printf("\n%d",opponent-kabali);
	}
	}
	getch();
}
