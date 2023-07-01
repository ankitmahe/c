
#include<stdio.h>
#include<math.h>
int main()
{
    float i,p,q,n,r,a;
    
    for(i=1;i<=10;i++)
    {
        printf("compounding times and no of years  = ");
        scanf("%f %f",&q,&n);
        printf("Enter the Principal and Rate = ");
            scanf("%f %f",&p,&r);
            a=p*pow((1+r/q),n*q);
            printf("coumpounded result = %f\n",a);
    }
    return 0;
}