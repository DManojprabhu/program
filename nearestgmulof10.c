#include <stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%10==0)
		{
			printf("%d",n);
			break;
		}
		n++;
	}
}
