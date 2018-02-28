#include<stdio.h>
void main()
{
    int m,n1,n2;
    scanf("%d %d",&n1,&n2);
    m=n1;
    n1=n2;
    n2=m;
    printf("%d %d",n1,n2);
    getch();
}
