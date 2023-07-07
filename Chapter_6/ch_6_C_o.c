// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf("  ");
//         }
//         for(k=1;k<=i;k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main() {
   int temp = 1, k, i, j;
   for (i = 0; i < 5; i++) 
   {
      for (j = 1; j <= 5 - i; j++)
         printf("  ");
      for (k = 0; k <= i; k++) {
         if (k == 0 || i == 0)
            temp = 1;
         else
            temp = temp * (i - k + 1) / k;
         printf("%4d", temp);
      }
      printf("\n");
   }
   return 0;
}