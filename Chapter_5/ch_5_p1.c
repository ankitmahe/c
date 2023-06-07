#include <stdio.h>
int main()
{
    int i = 1, wh, pay, ot;
    while (i <= 10)
    {
        printf("Enter the working hours of Employee No. %d = ", i);
        scanf("%d", &wh);
        if (wh > 40)
        {
            ot = wh - 40;
            pay = ot * 120;
            printf("Pay Of Employee no %d is %d\n", i, pay);
        }
        else
        {
            printf("No Overtime no extra pay!\n");
        }
        i++;
    }

    return 0;
}