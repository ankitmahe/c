#include<stdio.h>
int main()
{
    int i=2,a,b,c,d,temp;
    while(i<=9999)
    {
        a=i%10;
        b=i%100;
        b=(b-a)/10;
        c=i%1000;
        c=(c-(b*10)+a)/100;
        d=i/1000;
        if(i>2 && i<999)
        {
            if(a*a*a+b*b*b+c*c*c == i)
            {
                printf("%d is a Armstrong number between 1 to 1000\n",i);    
            }
        }
        if(i==(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d))
        {
            printf("%d is a Armstrong number between 1000 to 10000\n",i);
        }
        i++;
    }
    return 0;
}