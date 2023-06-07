#include<stdio.h>
#include<math.h>
int main()
{
    int n,octal=0,r,temp,i=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%8;
        n=n/8;
        octal=octal+r*pow(10,i);
        i++;
    }
    // int a1,a2,a3;
    // a1 = n%8;
    // n=n/8;
    // a2 = n%8;
    // n= n/8;
    // a3 = n%8;
    // octal = a1 + a2*10 + a3 *100;
    printf("%d",octal);
    return 0;
}