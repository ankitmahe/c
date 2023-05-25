#include <stdio.h>
int main()
{
    int c, d, temp;
    printf("enter the laocation c and d = ");
    scanf("%d %d", &c, &d);
    temp = c;
    c = d;
    d = temp;
    printf("After swaping C and D %d %d",c,d);
    return 0;
}