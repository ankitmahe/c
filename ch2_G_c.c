#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("Enter length of first side = ");
    scanf("%f", &a);
    printf("Enter length of second side = ");
    scanf("%f", &b);
    printf("Enter length of third side = ");
    scanf("%f", &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is = %.2f", area);

    return 0;
}
