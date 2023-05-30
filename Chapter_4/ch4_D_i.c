#include <stdio.h>
#include <math.h>
int main()
{
    float angle, sine, cosine, sum;
    printf("Enter the angle = ");
    scanf("%f", &angle);
    angle = angle * (3.14 / 180);
    sine = sin(angle);
    cosine = cos(angle);
    if (sine * sine + cosine * cosine == 1)
    {
        printf("Square of %.2f %.2f is (%.2f + %.2f) = %.2f",sine,cosine,sine*sine, cosine*cosine,sine * sine + cosine * cosine);
    }
    else
        printf("Wrong Entry");
    return 0;
}