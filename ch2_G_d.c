#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;
    printf("Enter a Temperature = ");
    scanf("%f",&t);
    printf("Enter a valocity = ");
    scanf("%f",&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("Wind chill factor of = %.2f",wcf);
    return 0;
}