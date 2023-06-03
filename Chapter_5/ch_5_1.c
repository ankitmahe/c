#include<stdio.h>
int main()
{
    float p,n,count;
    float si,r;
    count=10.0;
    while(count>0)
    {
        printf("\nEnter value of p,n and r = ");
        scanf("%f %f %f",&p,&n,&r);
        si=p*n*r/100;
        printf("Simple Interest = RS.%f",si);
        count = count - 0.1 ;
    }
    return 0;
}