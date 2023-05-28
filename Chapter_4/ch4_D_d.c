#include <stdio.h>
int main()
{
    float a,b,c,big,s1,s2;
    printf("Enter the three side area of Triangle = ");
    scanf("%f %f %f", &a, &b, &c);
    (((a>b) && (a>c))?(big=a):((b>a) && (b>c))?(big=b) : (big=c));
    ((a==big)?((s1=b)&&(s2=c)):(b==big)?((s1=a)&&(s2=c)):((s1=a)&&(s2=b)));
    if(big<s1+s1)
    printf("Valid triangle");
    else
    printf("Not valid triangle");
    return 0;
}