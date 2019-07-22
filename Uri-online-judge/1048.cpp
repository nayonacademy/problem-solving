//1048 - Salary Increase
#include <iostream>
#include <cstdio>
    using namespace std;

int main()
{
    double salin, salout, money, percent, val, multi;
    char ch = '%';

    scanf("%lf", &salin);

    if (salin >= 0 && salin <= 400.00)
    {
        val = 0.15;
    }
    else if (salin >= 400.01 && salin <= 800.00)
    {
        val = 0.12;
    }
    else if (salin >= 800.01 && salin <= 1200.00)
    {
        val = 0.1;
    }
    else if (salin >= 1200.01 && salin <= 2000.00)
    {
        val = 0.07;
    }
    else
    {
        val = 0.04;
    }

    money = salin * val;
    salout = salin + money;
    percent = val * 100;

    printf("Novo salario: %.2lf\n", salout);
    printf("Reajuste ganho: %.2lf\n", money);
    printf("Em percentual: %.lf %c\n", percent, ch);

    return 0;
}