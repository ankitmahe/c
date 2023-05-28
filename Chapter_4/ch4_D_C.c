// #include <stdio.h>
// int main()
// {
//     float hardness, carbon, tensile;
//     printf("Enter a Hardness = ");
//     scanf("%f", &hardness);
//     printf("Enter a Carbon = ");
//     scanf("%f", &carbon);
//     printf("Enter tensile = ");
//     scanf("%f", &tensile);
//     if (hardness > 50 && carbon < 0.7 && tensile > 5600)
//     {
//         printf("Grade is 10");
//     }
//     if (hardness > 50 && carbon < 0.7 && tensile < 5600)
//     {
//         printf("Grade is 9");
//     }
//     if (hardness < 50 && carbon < 0.7 && tensile > 5600)
//     {
//         printf("Grade is 8");
//     }
//     if (hardness > 50 && carbon > 0.7 && tensile > 5600)
//     {
//         printf("Grade is 7");
//     }
//     if (hardness > 50 && carbon > 0.7 && tensile < 5600 || hardness < 50 && carbon < 0.7 && tensile < 5600 || hardness < 50 && carbon > 0.7 && tensile > 5600)
//     {
//         printf("Grade is 6");
//     }
//     if(hardness < 50 && carbon > 0.7 && tensile < 5600)
//     {
//         printf("Grade is 5");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    float hardness, carbon, tensile;
    printf("Enter a Hardness = ");
    scanf("%f", &hardness);
    printf("Enter a Carbon = ");
    scanf("%f", &carbon);
    printf("Enter tensile = ");
    scanf("%f", &tensile);
    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
    {
        printf("Grade is 10");
    }
    else if (hardness > 50 && carbon < 0.7)
    {
        printf("Grade is 9");
    }
    else if (carbon < 0.7 && tensile > 5600)
    {
        printf("Grade is 8");
    }
    else if (tensile > 5600 && hardness > 50)
    {
        printf("Grade is 7");
    }
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
    {
        printf("Grade is 6");
    }
    else
        printf("Grade is 5");

    return 0;
}