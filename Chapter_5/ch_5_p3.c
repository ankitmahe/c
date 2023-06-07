#include<stdio.h>
int main()
{
    int x,y,mul=1;
    printf("Enter Two Value = ");
    scanf("%d %d",&x,&y);
    while (y>0)    
    {
        mul=mul*x;
        y--;
    }
    printf("%d",mul);
    return 0;
}