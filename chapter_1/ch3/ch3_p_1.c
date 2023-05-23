#include <stdio.h>
int main()
{
    float cp, sp, dif; // cp = cost price sp = selling price
    printf("Enter cost price and selling = ");
    scanf("%f %f", &cp, &sp);
    dif = sp - cp;
    if (dif > 0)
    {
        printf("You Got Profit %f ", dif);
    }
    if (dif < 0)
    {
        printf("you Got loss of %f ", dif);
    }
    if(dif==0)
    {
        printf("No Profit No Loss",dif);
    }

    return 0;
}