// #include <stdio.h>
// int main()
// {
//     char mar, gen;
//     int age;
//     printf("Enter th e Married,Gender and Age = ");
//     scanf("%c %c %d", &mar, &gen, &age);
//     if (mar == 'm')
//         printf("Insure");
//     else if (mar == 'u' && gen == 'm' && age >= 30)
//         printf("Insure");
//     else if (mar == 'u' && gen == 'f' && age >= 25)
//         printf("Driver is insure");
//     else
//         printf("Driver is not Insure");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char mar, gen;
//     int age;
//     printf("Enter th e Married,Gender and Age = ");
//     scanf("%c %c %d", &mar, &gen, &age);
//     if (mar == 'm' || mar == 'u' && gen == 'm' && age >= 30 || mar == 'u' && gen == 'f' && age >= 25)
//         printf("Insure");
//     else
//         printf("Driver is not Insure");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char g;
//     int yos, qual, sal = 0;
//     printf("Enter Gender, Years of Service and Qualifications ( 0 = G, 1 = PG ):");
//     scanf("%c %d %d", &g, &yos, &qual);
//     if (g == 'm' && yos >= 10 && qual == 1)
//         sal = 15000;
//     else if ((g == 'm' && yos >= 10 && qual == 0) || (g == 'm' && yos < 10 && qual == 1))
//         sal = 10000;
//     else if (g == 'm' && yos < 10 && qual == 0)
//         sal = 7000;
//     else if (g == 'f' && yos >= 10 && qual == 1)
//         sal = 12000;
//     else if (g == 'f' && yos >= 10 && qual == 0)
//         sal = 9000;
//     else if (g == 'f' && yos < 10 && qual == 1)
//         sal = 10000;
//     else if (g == 'f' && yos < 10 && qual == 0)
//         sal = 6000;
//     printf("\nSalary of Employee = %d\n", sal);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char gen, ms;
//     int age;
//     printf("Enter the marital status : ");
//     scanf("%c", &ms);
//     printf("Enter Gender : ");
//     scanf(" %c", &gen);
//     printf("Enter Age : ");
//     scanf("%d", &age);
//     printf("age = %d\ngen = %c\nMarital status = %c\n", age, gen, ms);
//     if ((ms == 'M') || (ms == 'm') || (ms == 'U' || ms == 'u' && gen == 'M' || gen == 'm' && age > 30) || (ms == 'U' || ms == 'u' && gen == 'F' || gen == 'f' && age > 25))
//         printf("Driver should be insured.");
//     else
//         printf("Driver should not be insured.");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int year;
//     scanf("%d", &year);
//     (year % 100 == 0) ? (year % 400 == 0) ? printf("Leapyear") : printf("Non leapyear") : (year % 4 == 0) ? printf("Leapyear") : printf("Non leapyear");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,c,big,big_con;
//     printf("Entered number = ");
//     scanf("%d %d %d",&a,&b,&c);
//     if((a>b) && (a>c))
//         big =a;
//     if((b>a) && (b>c))
//         big=b;
//     if((c>b) && (c>a))
//         big=c;
//     printf("Biggest Number is %d\n",big);
//     ((a>b) && (a>c)) ? (big_con = a) :  ((b>a)&&(b>c)) ? (big_con=b) : ((c>a)&&(c>b)) ? (big_con=c) : printf("Wrong") ;
//     printf("Big by conditional operator = %d ",big_con);
//         return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter any year = ");
//     scanf("%d", &year);
//     (year % 4 == 0) ? printf("%d is Leapyear",year) : printf("%d is not Leapyaer",year);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character from the Keyboard = ");
//     scanf("%c",&ch);
//     if(ch>=65 && ch<=90)
//         printf("The character is an uppercase letter\n");
//     if(ch>=97 && ch<=122)
//         printf("The character is lowercase letter\n");
//     if(ch>=48 && ch<=57)
//         printf("The character is digit\n");
//     if((ch>=0 && ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || ch>122)
//         printf("The character is a special symbol\n");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 20, y = 40, z = 45;
//     if (x > y && x > z)
//         printf("biggest = %d\n", x);
//     else if (y > x && y > z)
//         printf("biggest = %d\n", y);
//     else if (z > x && z > y)
//         printf("biggest = %d\n", z);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = -1, j = 1, k, l;
//     k = !i && j;
//     l = !i || j;
//     printf("%d %d\n", i, j);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 10, j = 20;
//     if ((i = 5) && (j = 10))
//         printf("Have a nice day\n");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 10, y = 20;
//     if (x >= 2 && y <= 50)
//         printf("%d\n", x);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 2;
//     if (x == 2 && x != 0)
//     printf("Hello\n");
//     else printf("Bye\n");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i = 10, j = 10;
//     if (i && j == 10)
//         printf("Have a nice day\n");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int j = 65;
//     printf("j >= 65 ? %d : %c\n", j);
//     return 0;
// }
# include <stdio.h>
int main()
{
    int i = 10, j;
    if((i >= 5 )?( j = 10 ):( j = 15))
    printf("%d %d\n", i, j);
    return 0;
}
