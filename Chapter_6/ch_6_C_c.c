#include<stdio.h>
int main()
{
    float i,fact = 1,k,count = 0;
    float j = 0;
    for(i=1;i<=7;i++)
    {   
        fact =1;
        for(k=1;k<=i;k++)
        {
            fact = fact * k;
        }
        j = j + i/fact;
    }
    printf("%f",j);
    return 0;
}