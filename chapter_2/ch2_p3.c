#include <stdio.h>
int main()
{
    int amount, nohun, nofif, noten, nofive, noone, total;
    printf("Enter the Amount : ");
    scanf("%d", &amount);
    nohun = amount / 100;
    amount = amount % 100;
    nofif = amount / 50;
    amount = amount % 50;
    noten = amount / 10;
    amount = amount % 10;
    nofive = amount / 5;
    amount = amount % 5;
    noone = amount / 1;
    amount = amount % 1;
    total = nohun + nofif + noten + nofive + noone;
    printf("Total note of 100 = %d\n",nohun);
    printf("Total note of 50 = %d\n",nofif);
    printf("Total note of 10 = %d\n",noten);
    printf("Total note of 5 = %d\n",nofive);
    printf("Total note of 1 = %d\n",noone);
    printf("Smallest Number of notes = %d\n", total);


    return 0;
}