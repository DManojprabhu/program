#include <stdio.h>
void main()
{
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    while(n != 0)
    {
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
getch();
}
