#include<stdio.h>
int main()
{
    int year,leap_year,day;
    printf("Enter the Year = ");
    scanf("%d",&year);
    year=year-1;
    day=year*365;
    leap_year=(year/4)+(year/400)-(year/100);
    day = day+leap_year;
    day = day%7;
    if(day==0)
        printf("Monday");
    if(day==1)
        printf("Tuesday");
    if(day==2)
        printf("Wednesday");
    if(day==3)
        printf("Thursday");
    if(day==4)
        printf("Friday");
    if(day==5)
        printf("Saturday");
    if(day==6)
        printf("Sunday");
    return 0;
}