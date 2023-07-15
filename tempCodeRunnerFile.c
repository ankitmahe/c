// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for (k=1;k<=i*2-1;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for ( i = 1; i <=5; i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(k=9;k>=i*2-1;k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int goals;
//     printf("Enter the number of goals scored against India");
//     scanf("%d", &goals);
//     if (goals <= 5)
//         goto gol;
//     else
//     {
//         printf("About time soccer players learnt C\n");
//         printf("and said goodbye! adieu! to soccer\n");
//         exit(1); /* terminates program execution */
//        // return 0;
//     }
// gol:
//     printf("To err is human!\n");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//         for(j=1;j<=3;j++)
//         {
//             for(k=1;k<=3;k++)
//             {
//                 if(i==3 && j==3 && k==3)
//                 {
//                     goto out;
//                 }
//                 else
//                 {
//                     printf("%d %d %d\n",i,j,k);
//                 }
//             }
//         }
//     }
//     out:
//     printf("out of the loops at last!\n");
//     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     char suite = 1;
//     switch (suite)
//     {
//     case 1:
//         printf("Diamond\n");
//     case 2:
//         printf("Spade\n");
//     default:
//         printf("Heart\n");
//     }
//     printf("I thought one wears a suite\n");

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char c = 3;
//     switch (c)
//     {
//     case '3':
//         printf("You never win the silver prize\n");
//         break;
//     case 3:
//         printf("You always lose the gold prize\n");
//         break;
//     default:
//         printf("Of course provided you win a prize\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     switch (i)
//     {
//     case 0:
//         printf("Customers are dicey\n");
//     case 1 + 0:
//         printf("Markets are pricey\n");
//     case 4 / 2:
//         printf("Investors are moody\n");
//     case 8 % 5:
//         printf("At least employees are good\n");
//     }
//     return 0;
// }
// # include <stdio.h>
// int main( )
// {
//     int k;
//     float j = 2.0;
//     switch (k = j + 1)
//     {
//     case 3:
//         printf("Trapped\n");
//         break;
//     default:
//         printf("Caught!\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int ch = 'a' + 'b';
//     switch (ch)
//     {
//     case 'a':
//     case 'b':
//         printf("You entered b\n");
//     case 'A':
//         printf("a as in ashar\n");
//     case 'b' + 'a':
//         printf("You entered a and b\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     switch (i - 2)
//     {
//     case -1:
//         printf("Feeding fish\n");break;
//     case 0:
//         printf("Weeding grass\n");
//     case 1:
//         printf("Mending roof\n");
//     default:
//         printf("Just to survive\n");
//     }
//     return 0;
// }
// # include <stdio.h>
// int main( )
// {
// int suite = 1 ;
// switch ( suite )
// {
// case 0 :
// printf ( "Club\n" ) ;
// case 1 :
// printf ( "Diamond\n" ) ;
// }
// return 0 ;
// }
// # include <stdio.h>
// int main( )
// {
//     int temp;
//     scanf("%d", &temp);
//     switch (temp)
//     {
//     case (temp <= 20):
//         printf("Ooooooohhhh! Damn cool!\n");
//     case (temp > 20 && temp <= 30):
//         printf("Rain rain here again!\n");
//     case (temp > 30 && temp <= 40):
//         printf("Wish I am on Everest\n");
//     default:
//         printf("Good old nagpur weather\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a = 3;
//     switch (a)
//     {
//     case 1 :
//         printf("The art of C\n");
//         break;
//     case 2 :
//         printf("The spirit of C\n");
//         break;
//     case 3 :
//         printf("See through C\n");
//         break;
//     case 4 :
//         printf("Simply c\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a = 3, b = 4, c;
//     c = b - a;
//     switch (c)
//     {
//     case 1 || 2:
//         printf("God give me a chance to change things\n");
//         break;
//     case a || b:
//         printf("God give me a chance to run my show\n");
//         break;
//     }
//     return 0;
// }
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,w=1;
    sourse :
    printf("\n1. Factorial Number\n2. Prime or not\n3. Odd or even\n4. Exit \nEnter option = ");
    scanf("%d", &n);
    while (w != 0)
    {
        switch (n)
        {
        case 1:
            int a,fact=1;
            printf("Enter a number: ");
            scanf("%d", &a);
            for (int i = 1; i <= a; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d is: %d\n", a, fact);
            goto sourse;
            break;
        case 2:
            int flag,num,count=0;
            printf("Enter the number to check prime:");
            scanf("%d", &num);
            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
                printf("Number is prime\n");
            goto sourse;
        case 3:
            int number;
            printf("Enter an integer: ");
            scanf("%d", &number);

            if (number % 2 == 0)
                printf("%d is even.\n", number);
            else
                printf("%d is odd.\n", number);
            goto sourse;
        case 4:
            printf("Exit And Close\n");
            exit(1);
        }
    }
    return 0;
}