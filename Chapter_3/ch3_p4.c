#include <stdio.h>
int main()
{
    int n;
    printf("Enter Any Number = ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is odd Number",n);
    }
    else
    {
        printf("%d is even Number",n);
    }
    return 0;
}