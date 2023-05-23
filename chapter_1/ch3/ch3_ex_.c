#include<stdio.h>
int main()
{
    float sal,bs,hra,da;
    printf("Enter a basic salary : ");
    scanf("%f",&bs);
    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    printf("house rent announce = %f\n",hra);
    printf("driving allounce = %f\n",da);
    sal=hra+da+bs;
    printf("Salary = %.2f\n",sal);
    return 0;
}
