#include <stdio.h>
int main()
{
    float u, a, v, t, s;
    printf("Enter initial velocity:");
    scanf("%f", &u);
    printf("Enter accelaration:");
    scanf("%f", &a);
    printf("Enter time:");
    scanf("%f", &t);
    v = u + a *t;
    s = 2 * t * v;
    printf("Displacement after 2t time: %f", s);
}