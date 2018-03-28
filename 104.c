#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k,res=1,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        res=res*n;
    }
    printf("%d",res);
	getch();
}
