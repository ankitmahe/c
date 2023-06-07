#include <stdio.h>
int main()
{
    int a, fact = 1;
    printf("Enter the Value = ");
    scanf("%d", &a);
    while (a>0)
    {
        fact = fact * a;
        a++;
    }
    printf("%d", fact);
    return 0;
}