#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 50; i++)
    {
        for (j = 0; j <= 40; j++)
        {
            printf("%s", "\u263A");
        }
        printf("\n");
    }
    return 0;
}