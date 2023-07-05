/*Write a program to produce the following output: 
        1
      2    3
    4   5    6
  7   8    9    10*/
#include<stdio.h>
int main()
{
    int i,j,k,a=1,num;
    printf("Enter any number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++,a++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    
    return 0;
}