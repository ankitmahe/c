// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     a = 5;
//     b = 10;
//     c = 0;
//     while (a <= 15 ||  b >= 4)

//     {
//         c=c+1;
//         printf("True %d time \n", c);
//         a = a + 1;
//         b = b - 1;
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     // while (i <= 10)
//     // {
//     //     printf("%d\n",i);
//     //     i++;
//     // }
//     printf("%d \n",i++);
//     printf("%d \n",i);
//     i += 5;
//     printf("%d \n ",i);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float i=1.0;
//     while(i<=2.0)
//     {
//         printf("%f\n",i);
//         i = i + 0.1;
//         }
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,i=4,r,count=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(temp>0)
    {
        temp = temp/10;
        count++;
    }
    // printf("%d",count);
    count=count-1;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev+r*pow(10,count);
        count--;
    }
    printf("%d",rev);
    return 0;
}