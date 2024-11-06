#include <stdio.h>
int main()
{
    int i;
    int ftMarks[] = {83, 84, 89, 90, 91, 92, 93, 95, 83, 89, 92, 79, 69, 59, 58, 78, 96, 78, 83, 84, 81, 83, 89, 78, 76, 56, 61, 72, 74, 68, 52, 61, 71, 70, 80, 90, 50, 60, 86, 88};
    int sdMarks[] = {83, 83, 83, 79, 91, 92, 93, 97, 83, 85, 90, 71, 69, 59, 85, 77, 96, 78, 83, 84, 70, 83, 82, 78, 76, 56, 61, 72, 74, 60, 50, 41, 41, 50, 60, 90, 50, 60, 76, 68};
    int finalMarks[] = {63, 85, 83, 45, 79, 73, 59, 57, 63, 55, 70, 61, 79, 59, 95, 47, 66, 88, 81, 44, 50, 63, 90, 88, 66, 66, 71, 79, 70, 60, 50, 41, 41, 50, 60, 90, 50, 60, 76, 68};
    double totalMarks[40];
    for (i = 0; i < 40; i++)
    {
        totalMarks[i] = ftMarks[i] / 4.0 + sdMarks[i] / 4.0 + finalMarks[i] / 2.0;
    }
    for (i = 1; i < 40; i++)
    {
        printf("%0.0lf ",totalMarks[i-1]);
        // printf("Roll NO: %d\tTotal Marks: %0.0lf\n", i, totalMarks[i - 1]);
    }

    int marks, count;

    for (marks = 46; marks <= 100; marks++)
    {
        for (i = 0; i < 40; i++)
        {
            if (totalMarks[i] == marks)
            {
                count++;
            }   
        }
        printf("\n");
        printf("%d %d  ", marks, count);
        count = 0;
    }
}