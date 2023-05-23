#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("Enter a Principal = ");
    scanf("%d",&p);
    printf("Enter a Rate = ");
    scanf("%d",&r);
    printf("Enter a Time = ");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("Simple Interset of = %d ",si);
    return 0;
}