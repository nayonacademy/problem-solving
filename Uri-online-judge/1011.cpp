// 1011 - Sphere
#include <stdio.h>
int main()
{
    double spher, result;
    scanf("%lf", &spher);
    result = 4 / 3.0 * 3.14159 * spher * spher * spher;
    printf("VOLUME = %.3f\n", result);
    return 0;
}