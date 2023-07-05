#include<stdio.h>
int main()
{
    int n,k,i,j,l;
   // printf("Enter the Number of Rows  = ");
    //scanf("%d",&n);
    for(i=7;i>=1;i--)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=i)
            printf("%c ",'A' + j-1);
            else
            printf("  ");
        }
        for(j=6;j>=1;j--)
        {
            if(j<=i)
            printf("%c ",'A' + j-1);
            else
            printf("  ");
        }
        printf("\n");

    }
    //printf("\n");
    return 0;
}