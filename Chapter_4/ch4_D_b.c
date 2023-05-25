#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year = ");
    scanf("%d",&year);
    if((year%4==0) || (year%400==0) && (year%100!=0))
    {
        printf("Leapyear");
    }
    else
    {
        printf("Not Leapyear");
    }
    return 0;
}