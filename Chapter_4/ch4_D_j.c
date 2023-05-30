#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter weight(in kilogram)  = ");
    scanf("%f", &weight);
    printf("Enter height(in meter)  = ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    (bmi < 15) ? printf("Starvation") : ((bmi >= 15.1) && (bmi < 17.5)) ? printf("Anorexic")
                                    : ((bmi >= 17.6) && (bmi <= 18.5))  ? printf("Underweight")
                                    : ((bmi >= 18.6) && (bmi <= 24.9))  ? printf("Ideal")
                                    : ((bmi >= 25) && (bmi <= 25.9))    ? printf("Overweight")
                                    : ((bmi >= 30) && (bmi <= 30.9))    ? printf("Obese")
                                    : printf("Morbidly Obese");
    return 0;
}