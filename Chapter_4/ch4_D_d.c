#include <stdio.h>
int main()
{
    float s1, s2, s3;
    printf("Enter the three side area of Triangle = ");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid");
    }    return 0;
}