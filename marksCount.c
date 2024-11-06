#include <stdio.h>
int main()
{
    int totalMarks[] = {73, 84, 85, 65, 85, 83, 76, 77, 73, 71, 81, 68, 74, 59, 83, 62, 81, 83, 82, 64, 63, 73, 88, 83, 71, 61, 66, 76, 72, 62, 51, 46, 49, 55, 65, 90, 50, 60, 79};
    int i, marksCount[101];
    for (i = 0; i < 101; i++)
    {
        marksCount[i] = 0;
    }
    for (i = 0; i < 40; i++)
    {
        marksCount[totalMarks[i]]++;
    }
    for (i = 46; i <= 100; i++)
    {
        printf("%d %d\n",i,marksCount[i]);
    }
}