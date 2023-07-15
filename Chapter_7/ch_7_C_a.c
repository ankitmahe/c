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