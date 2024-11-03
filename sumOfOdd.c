#include <stdio.h>
int main()
{
    int sum, n, i, mid;
    printf("Enter the last positive odd number: ");
    scanf("%d", &n);
    mid = (n + 1) / 2;
    sum = mid * mid;
    printf("The sum of nth positive odd number is: %d", sum);
}