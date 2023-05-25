#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float angle;
    printf("enter tthe angle = ");
    scanf("%f", &angle);
    angle = angle * pi / 180;
    printf("sin  = %f\n", sin(angle));
    printf("cos  = %f\n", cos(angle));
    printf("tan  = %f\n", tan(angle));
    printf("cosec  = %f\n", 1 / sin(angle));
    printf("sec  = %f\n", 1 / cos(angle));
    printf("cot  = %f\n", 1 / tan(angle));
    return 0;
}
