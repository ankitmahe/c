#include <stdio.h>
int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = 0;
    while (a <= 15 ||  b >= 4)
    
    {
        c=c+1;
        printf("True %d time \n", c);
        a = a + 1;
        b = b - 1;
    }
    return 0;
}