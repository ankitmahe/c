// #include <stdio.h>
// int main()
// {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if (ch >= 65 && ch <= 90)
//     {
//         printf("The character is a capital letter.\n");
//     }
//     else if (ch >= 97 && ch <= 122)
//     {
//         printf("The character is a small case letter.\n");
//     }
//     else if (ch >= 48 && ch <= 57)
//     {
//         printf("The character is a digit.\n");
//     }
//     else
//     {
//         printf("The character is a special symbol.\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a character = ");
  scanf("%c", &ch);
  ((ch >= 65) && (ch <= 90)) ? printf("Capital") : ((ch >= 97) && (ch <= 127)) ? printf("small")
  : ((ch >= 48) && (ch <= 57)) ? printf("digit"): ((ch>=0) && (ch<=47)) ? printf("special"): ((ch>=58)&& ch<=64);
  return 0;
}