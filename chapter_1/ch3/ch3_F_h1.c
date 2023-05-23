#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the X-axis and Y-axis = ");
    scanf("%d %d",&x,&y);
    if(x==0 && y!=0)
    {
        printf("point on the Y-axis\n",x);
    }
    if(x!=0 && y==0)
    {
        printf("point on the X-axis\n",y);
    }
    else
    {
        printf("point is not X-axis and Y-axis");
    }
    return 0;
}