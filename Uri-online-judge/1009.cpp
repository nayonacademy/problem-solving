//1009 - Salary with Bonus solution
#include <stdio.h>
int main()
{
    char name;
    double salary, sale, sales_rev;
    scanf("%s %lf %lf", &name, &salary, &sale);
    sales_rev = salary + (sale * 15) / 100;
    printf("TOTAL = R$ %.2f\n", sales_rev);
    return 0;
}