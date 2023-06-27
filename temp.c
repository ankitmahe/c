// // #include <stdio.h>
// // int main()
// // {
// //     int a, b, c;
// //     a = 5;
// //     b = 10;
// //     c = 0;
// //     while (a <= 15 ||  b >= 4)

// //     {
// //         c=c+1;
// //         printf("True %d time \n", c);
// //         a = a + 1;
// //         b = b - 1;
// //     }
// //     return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     int i = 1;
// //     // while (i <= 10)
// //     // {
// //     //     printf("%d\n",i);
// //     //     i++;
// //     // }
// //     printf("%d \n",i++);
// //     printf("%d \n",i);
// //     i += 5;
// //     printf("%d \n ",i);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main()
// // {
// //     float i=1.0;
// //     while(i<=2.0)
// //     {
// //         printf("%f\n",i);
// //         i = i + 0.1;
// //         }
// //     return 0;
// // }

// // #include<stdio.h>
// // #include<math.h>
// // int main()
// // {
// //     int n,rev=0,i=4,r,count=0;
// //     printf("Enter the Number : ");
// //     scanf("%d",&n);
// //     int temp;
// //     temp=n;
// //     while(temp>0)
// //     {
// //         temp = temp/10;
// //         count++;
// //     }
// //     // printf("%d",count);
// //     count=count-1;
// //     while (n>0)
// //     {
// //         r=n%10;
// //         n=n/10;
// //         rev=rev+r*pow(10,count);
// //         count--;
// //     }
// //     printf("%d",rev);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main()
// // {
// //     int smallest,biggest,n,range,i=1,num;
// //     printf("Enter the Range of enter the Nmber : ");
// //     scanf("%d",&n);
// //     printf("Enter the number : ");
// //     scanf("%d",&num);
// //     smallest=num;
// //     biggest=num;
// //     i++;
// //     while(n>1)
// //     {
// //         printf("Enter the Number %d =: ",i);
// //         scanf("%d",&num);
// //         if(num<smallest)
// //         {
// //             smallest=num;
// //         }
// //         if(num>biggest)
// //         {
// //             biggest=num;
// //         }
// //         i++;
// //         n--;
// //     }
// //     printf("Biggest Number is %d\n",biggest);
// //     printf("Smallest Number is %d\n",smallest);
// //     range=biggest-smallest;
// //     printf("Range is different between the smallest and biggest number is %d",range);
// //     return 0;
// // }
// // #include<stdio.h>
// // #include<math.h>
// // int main()
// // {
// //     int octal=0,n,r,i=0,temp;
// //     printf("Enter the Number : ");
// //     scanf("%d",&n);
// //     while (n>0)
// //     {
// //         r=n%8;
// //         n=n/8;
// //         octal=octal+r*pow(10,i);
// //         i++;
// //     }
// //     printf("%d",octal);
// //     return 0;
// // // }
// // #include<stdio.h>
// // int main()
// // {
// //     int r,c,sum;
// //     for(r=1;r<=3;r++)
// //     {
// //         for(c=1;c<=2;c++)
// //         {
// //             sum=r+c;
// //             printf("r=%d c=%d sum=%d\n",r,c,sum);
// //         }
// //     }
// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     int i, j, k=0,rows;
//     printf("Enter the number define to the rows = ");
//     scanf("%d",&rows);
//     for (i = 1; i <=rows; i++)
//     {
//         for (j = 1; j <= rows-i; j++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= i * 2 - 1; k++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,k=0,rows;
//     printf("Enter the number of rows = ");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++)
//     {
//         for(j=1;j<=rows-i;j++)
//         {
//             printf(" ");
//         }
//         for(k=1;k<=(i*2-1);k++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
//     }
//     for(i=1;i<=rows;i++)
//         {
//             for ( j = 1; j <= (rows*2-1);j++)
//             {
//                 if(i>=3 && i<=5 && j>=5 && j<=9)
//                 {
//                     printf(" ");
//                     continue;
//                 }
//                 printf("*");
//             }
//             printf("\n");    
//         }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for (k=1;k<=i*2-1;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for ( i = 1; i <=5; i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(k=9;k>=i*2-1;k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(i>=2 && j>=2 && i<=4 && j<=4)
//             {
//                 printf(" ");
//             }
//             if(i==1 && j>=1 && j<=5)
//             {
//               printf("* ");
//             }
//             if(i==5 && j>=1 && j<=5)
//             {
//               printf("* ");
//             }
//             if(i>=2 && i<=4 && j==1)
//             printf("*");
//             if(i>=2 && i<=4 && j==5)
//             printf("    *");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
  int n,k,i,j,l;

  printf("Enter number of rows: ");
  scanf("%d",&n);
  for(i=1; i <= n; i++)
  {
    for(j=1; j <=i; j++)
    {
      printf("*");
    }
    for(k=n*2-i*2;k>1;k--)
      {
        printf(" ");
      }
    for(l=1;l<=i;l++)
    {
      if(l>=1 && l<n)
      printf("*");
    }
  printf("\n");
  }
  return 0;
}