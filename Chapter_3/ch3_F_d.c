#include <stdio.h>
int main()
{
    int a1, a2, a3, sum;
    printf("Enter three angles of Triangle = ");
    scanf("%d %d %d", &a1, &a2, &a3);
    sum = a1 + a2 + a3;
    if (sum == 180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is not Valid");
    }
    return 0;
}