#include <stdio.h>
int main()
{
    double x, y, xPlusy, xMinusy;
    printf("Enter the value of x + y:");
    scanf("%lf",&xPlusy);
    printf("Enter the value of x - y:");
    scanf("%lf",&xMinusy);
    x = (xPlusy+xMinusy)/2;
    y = (xPlusy-xMinusy)/2;
    printf("x = %0.2lf, y = %0.2lf", x, y);
}