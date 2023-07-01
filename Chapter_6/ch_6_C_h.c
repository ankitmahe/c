/*The natural logarithm can be approximated by the following series.
x-1/x + 1/2
If x is input through the keyboard, write a program to calculate the 
sum of first seven terms of this series*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,x,j,term;
    float sum,sol;
    printf("Enter The Value of X = ");
    scanf("%f",&x);
    term=(x-1)/x;
    printf("sum 1 = %f \n",term);
    sum=term;
    for(int i=2;i<=6;i++)
    {
        sum = sum + 0.5*pow((x-1)/x,i);
        printf("sum %d = %f \n",i,sum);
    }
    return 0;
}