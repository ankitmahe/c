#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float g1,g2,l1,l2,d;
    printf("Enter the l1 and l2 = ");
    scanf("%f %f",&l1,&l2);
    printf("Enter the g1 and g2 = ");
    scanf("%f %f",&g1,&g2);
    l1=l1*pi/180;
    l2=l2*pi/180;
    g1=g1*pi/180;
    g2=g2*pi/180;
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
    printf("Distance Between two given points in nautical miles = %.2f",d);
    return 0;
}