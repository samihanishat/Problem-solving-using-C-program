#include <stdio.h>
int main()
{
    int sum, i, n;
    sum = 0;
    printf("Enter the last positive odd number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    printf("The sum of nth positive odd number is: %d", sum);
}