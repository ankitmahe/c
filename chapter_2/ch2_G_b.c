#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, thetha;
    printf("Enter the value of co-ordinatesd (x,y) = ");
    scanf("%f %f", &x, &y);
    r = sqrt(x * x + y * y);
    thetha = atan2(y, x);
    thetha = thetha * 180 / 3.141592;
    printf("Polar co-ordinates are (%.2f,%.2f)", r, thetha);
    return 0;
}