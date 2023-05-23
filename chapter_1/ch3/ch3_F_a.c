#include <stdio.h>
int main()
{
    int a, n, rev = 0;
    printf("Enter the 5 digit number = ");
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    rev = rev + a * 10000;
    a = n % 10;
    n = n / 10;
    rev = rev + a * 1000;
    a = n % 10;
    n = n / 10;
    rev = rev + a * 100;
    a = n % 10;
    n = n / 10;
    rev = rev + a * 10;
    a = n % 10;
    n = n / 10;
    rev = rev + a * 1;
    printf("Number After Reverse id %d\n", rev);
    if (n == rev)
    {
        printf("same");
    }
    else
        printf("Different");
    return 0;
}