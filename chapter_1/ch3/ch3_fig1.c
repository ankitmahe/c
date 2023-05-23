#include<stdio.h>
int main()
{
    float price,qty,total;
    printf("enter the price and qty : ");
    scanf("%f %f",&price,&qty);
    total=price*qty;
    if(qty>1000)
    {
        total=total-(total*10/100);
    }
    else
    {
        total=total;
    }
    printf("total payble = %f",total);
    return 0;
}