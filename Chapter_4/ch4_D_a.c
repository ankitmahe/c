#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of Triangle = ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("Triangle is equilateral");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Triangle is isosceles");
    }

    else if (a != b && b != c && c != a)
    {
        printf("Triangle is scalene");
    }
    if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (a * a) + (c * c) == (b * b))
    {
        printf("\nthe triangle is right angle Triangle");
    }
    return 0;
}