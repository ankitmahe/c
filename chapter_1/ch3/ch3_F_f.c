#include <stdio.h>
int main()
{
    float l = 5, b = 4, area, perimeter;
    printf("Enter the length and breath area of Rectangle = ");
    scanf("%f %f", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    if (area > perimeter)
    {
        printf("Area of the rectangle is greater than its perimeter\n");
    }
    else
    {
        printf("Perimeter of the rectangle is greater than its Area");
    }
    return 0;
}