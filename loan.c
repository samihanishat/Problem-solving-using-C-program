#include <stdio.h>
int main()
{
    double p, n, r, total, monthly;
    printf("Enter the loan amount: ");
    scanf("%lf", &p);
    printf("Enter the interest rate: ");
    scanf("%lf", &r);
    printf("Enter the number of years: ");
    scanf("%lf", &n);
    total = p + p * n * r / 100;
    monthly = total / (n * 12);
    printf("Total amount: %0.2lf\n",total);
    printf("Monthly amount: %0.2lf\n",monthly);
}