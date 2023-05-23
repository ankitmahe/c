#include <stdio.h>
int main()
{
    float fah,cent;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fah);

    cent= (fah - 32) * 5 / 9;
    printf("The Temperature in Centigrade Degree: %.2f", cent);
    return 0;
}