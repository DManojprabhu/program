#include <stdio.h>

#include<string.h>

void main()

{

	char a[10];

	scanf("%[^\n]s",a);
	int len,count=1;
	len=strlen(a);
	
	for(int i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);	

}
