// /*Ramanujan number is the smallest number that can be expressed
// as sum of two cubes in two different ways. Write a program to print
// all such numbers up to a reasonable limit.*/
// #include<stdio.h>
// int main()
// {
//     int num,i,j,k,count=0;
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     {
//         count=0;
//         for(j=1;j*j*j<=i;j++)
//         {
//             for(k=j;j*j*j+k*k*k<=i;k++)
//             {
//                 if (j*j*j+k*k*k==i)
//                 {
//                     count++;
//                 }
//             }
//         }
//         if (count==2)
//         {
//             printf("%d\n",i);
//         }

//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int i = 1, j, k, count = 0;
    while (i <= 2000)
    {
        count = 0;
        j = 1;
        while (j * j * j <= i)
        {
            k = j;
            while (j * j * j + k * k * k <= i)
            {
                if (j * j * j + k * k * k == i)
                    count++;
                k++;
            }
            j++;
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}