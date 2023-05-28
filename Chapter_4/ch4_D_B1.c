#include<stdio.h>
int main()
{
    float r,g,b,cyan,white,magenta,yellow,black;
    printf("Enter the Red colour = ");
    scanf("%f",&r);
    printf("Enter the Green colour = ");
    scanf("%f",&g);
    printf("Enter the Blue colour = ");
    scanf("%f",&b);
    if(r<=255 && g<=255 && b<=255 && r>=0 && g>=0 && b>=0)
    {
    float big;
    ((r>g)&&(r>b)) ?(big=r):((b>r)&&(b>g))?(big=b):(big=g);
    white=big/255;
    cyan=(white-r/255)/white;
    magenta=(white-g/255)/white;
    yellow=(white-b/255)/white;
    black=1-white;
    if(r==0 && g==0 && b==0)
    {
        cyan=0;
        magenta=0;
        yellow=0;
        black=1;
    }
    printf("white = %f \n",white);
    printf("cyan = %f \n",cyan);
    printf("magenta = %f \n",magenta);
    printf("yellow = %f \n",yellow);
    printf("black = %f \n",black);
    }
    else
    {
        printf("Please enter values of RGB 0 to 255.");
    }
   return 0;
}