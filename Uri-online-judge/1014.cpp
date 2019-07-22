// 1014 - Consumption
#include <stdio.h>
int main()
{
    int distance;
    double spend, result;
    scanf("%d %lf", &distance, &spend);
    result = distance / spend;
    printf("%.3f km/l\n", result);
    return 0;
}