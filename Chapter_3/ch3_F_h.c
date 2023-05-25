#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,radious,pc;
    printf("center of x1 and y1 = ");
    scanf("%d %d",&x1,&y1);
    printf("enter of radious = ");
    scanf("%d",&radious);
    printf("center of x2 and y2 = ");
    scanf("%d %d",&x2,&y2);
    pc=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if(pc>radious)
    {
        printf("Outside");
    }
    if(pc<radious)
    {
        printf("Inside");
    }
    if(pc==radious)
    {
        printf("Boundary");
    }
    return 0;
}