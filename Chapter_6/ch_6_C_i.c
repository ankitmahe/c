/*Write a program to generate all Pythogorean Triplets with side 
length less than or equal to 30.*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=30;i++)
    {
        for(j=1;j<=30;j++)
        {
            for(k=1;k<=30;k++)
            {
                if(i*i+j*j==k*k)
                {
                    printf("%d*%d + %d*%d = %d*%d means ==>  ",i,i,j,j,k,k);      
                    printf("%d + %d = %d\n\n",i*i,j*j,k*k);
                }      
            }
        }
    }
    printf("are all pythogorian triplets.\n");
    return 0;
}