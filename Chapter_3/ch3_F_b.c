#include <stdio.h>
int main()
{
    int Ram, Shyam, Ajay;
    printf("Enter the Age of Ram Shyam and Ajay = ");
    scanf("%d %d %d", &Ram, &Shyam, &Ajay);
    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is youngest");
    }
    if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is youngest");
    }
    else if (Ajay < Ram && Ajay < Shyam)
    {
        printf("Ajay is youngest");
    }
    return 0;
}