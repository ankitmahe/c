/*Population of a town today is 100000. The population has increased 
steadily at the rate of 10 % per year for last 10 years. Write a 
program to determine the population at the end of each year in the 
last decade.*/
#include<stdio.h>
int main()
{
    int population = 100000;
    for(int i=1;i<10;i++)
    {
        population = (population*100)/(100+10);
        printf("The total population of year %dth : %d\n",10-i,population);
    }
    return 0;
}