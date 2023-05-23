#include <stdio.h>
int main()
{
    int n, x1, x2, x3, x4, x5, rev,sum;
    printf("Enter the number : ");
    scanf("%d", &n);
    x1 = n % 10;
    n = n / 10;
    x2 = n % 10;
    n = n / 10;
    x3 = n % 10;
    n = n / 10;
    x4 = n % 10;
    n = n / 10;
    x5 = n % 10;
    rev = x1 * 10000 + x2 * 1000 + x3 * 100 + x4 * 10 + x5;
    sum=x1+x2+x3+x4+x5;
    printf("Reverse of = %d\n", rev);
    printf("Sum of entered number = %d",sum);
    return 0;
}