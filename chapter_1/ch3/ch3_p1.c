// #include <stdio.h>
// int main()
// {
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             {
//                 printf("%d is a leap year\n", year);
//             }
//             else
//             {
//                 printf("%d is not a leap year\n", year);
//             }
//         }
//         else
//         {
//             printf("%d is a leap year\n", year);
//         }
//     }
//     else
//     {
//         printf("%d is not a leap year\n", year);
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int year;
    printf("enter year");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("leap year");
        else
            printf(" nonleap year");

    }
    
    else
    {    
    if (year % 4 == 0)
        printf("leap year");
    else
        printf(" non leap year");
    }

    return 0;
}