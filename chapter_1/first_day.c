#include<stdio.h>
int main()
{
    float l,b,r,p,a,ac,cc;
    printf("enter the length of rectangle = ");
    scanf("%f",&l);
    printf("enter the breadth of rectangle = ");
    scanf("%f",&b);
    p=2*(l+b);
    a=l*b;
    printf("enter the radious of the circle = ");
    scanf("%f",&r);
    ac=2*3.14*r;
    cc=3.14*r*r;
    printf("eprimeter of the rectangle = %.2f\n",p);
    printf("Area of rectangle = %.2f\n",a);
    printf("Area of circle = %.2f\n",ac);
    printf("Circumfence of a circle = %.2f",cc);
return 0;
}