#include<stdio.h>
int main()
{
    int user,cu,n=21;
    while(n>1)
    {
        printf("Please pick matchstick between 1 to 4  : ");
        scanf("%d",&user);
        if(user<1 && user>4)
        {
            printf("Please enter number between 1 to 4");
            break;
        }
        n=n-user;
        printf("Matchstick left %d \n",n);
        cu=5-user;
        printf("Computer picked = %d\n",cu);
        n=n-cu;
        printf("Matchstick left %d \n",n);
        if(n==1)
        {
            printf("One matchstick left thats means user have to pick this \nAnd the computer Wins!!!!");
        }
    }
    return 0;
}