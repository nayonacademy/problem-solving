// 1038 - Snack
#include <stdio.h>
int main()
{
    int code, amount;
    scanf("%d %d", &code, &amount);

    if (code == 1)
    {
        printf("Total: R$ %.2lf\n", 4.00 * amount);
    }
    else if (code == 2)
    {
        printf("Total: R$ %.2lf\n", 4.50 * amount);
    }
    else if (code == 3)
    {
        printf("Total: R$ %.2lf\n", 5.00 * amount);
    }
    else if (code == 4)
    {
        printf("Total: R$ %.2lf\n", 2.00 * amount);
    }
    else if (code == 5)
    {
        printf("Total: R$ %.2lf\n", 1.50 * amount);
    }
    else
    {
        printf("Total: R$ 00.00\n");
    }

    return 0;
}