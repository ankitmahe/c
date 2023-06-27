#include<stdio.h>
int main()
{
    int num,i=1,count;
    for(num=1;num<=300;num++)
    {
        for(i=1;i<=num;i++)
        {
            
            if(num%i==0)
            {
                count++;
            }
        }
        if (count==2)
        {
            printf("%d ",num);
        }
        count = 0;
    }
    return 0;
}
