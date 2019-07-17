// 1005 - Average 1

#include <stdio.h>
int main()
{
    float a, b, avg;
    while (scanf("%f %f", &a, &b) != EOF)
    {
        if (a == 0.0 && b == 0.0)
        {
            printf("MEDIA = 0.00000\n");
        }
        else
        {
            avg = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
            printf("MEDIA = %.5f\n", avg);
        }
    }

    return 0;
}