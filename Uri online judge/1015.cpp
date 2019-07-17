// 1015 - Distance Between Two Points
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    double result;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    result = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
    printf("%.4f\n", result);
    return 0;
}