#include<stdio.h>
int main()
{
        printf("Enter the Number %d : ",i);
        scanf("%d",&num);
        if(num<smallest)
        {
            smallest=num;
        }
        if(num>biggest)
        {
            biggest=num;
        }
        i++;
        n--;
    }
{
    int smallest,biggest,n,range,i=1,num;
    printf("Enter the range how many numbers you wnat to enter : ");
    scanf("%d",&n);
    printf("Enter the Number %d : ",i);
    scanf("%d",&num);
    biggest=num;
    smallest=num;
    i++;
    while(n>1)
    {
        
    printf("Smallest number = %d\n",smallest);
    printf("Biggest number = %d\n",biggest);
    printf("Range of small to big = %d",biggest-smallest-1);
    return 0;
}