#include <stdio.h>

int main()
{
    double banknotes_a;
    int restamount = 0;
    scanf("%lf", &banknotes_a);
    int banknotes = banknotes_a * 100;
    printf("NOTAS:\n");
    if (banknotes % 10000 != 0)
    {
        printf("%d nota(s) de R$ 100.00\n", banknotes / 10000);
        restamount = (banknotes % 10000);
    }
    else
    {
        printf("0 nota(s) de R$ 100.00\n");
        restamount = 0;
    }


    if (restamount != 0 && restamount % 5000 != 0)
    {
        printf("%d nota(s) de R$ 50.00\n", restamount / 5000);
        restamount = (restamount % 5000);
    }
    else
    {
        printf("0 nota(s) de R$ 50.00\n");
    }


    if (restamount != 0 && restamount >= 2000)
    {
        printf("%d nota(s) de R$ 20.00\n", restamount / 2000);
        restamount = (restamount % 2000);
    }
    else
    {
        printf("0 nota(s) de R$ 20.00\n");
    }
    if (restamount != 0 && restamount >= 1000)
    {
        printf("%d nota(s) de R$ 10.00\n", restamount / 1000);
        restamount = (restamount % 1000);
    }
    else
    {
        printf("0 nota(s) de R$ 10.00\n");
    }

    if (restamount != 0 && restamount >= 500)
    {
        printf("%d nota(s) de R$ 5.00\n", restamount / 500);
        restamount = (restamount % 500);
    }
    else
    {
        printf("0 nota(s) de R$ 5.00\n");
    }

    if (restamount != 0 && restamount >= 200)
    {
        printf("%d nota(s) de R$ 2.00\n", restamount / 200);
        restamount = (restamount % 200);
    }
    else
    {
        printf("0 nota(s) de R$ 2.00\n");
    }
    printf("MOEDAS:\n");
    if (restamount % 100 != 0)
    {
        printf("%d moeda(s) de R$ 1.00\n", restamount / 100);
        restamount = (restamount % 100);
    }
    else
    {
        printf("0 nota(s) de R$ 1.00\n");
        restamount = 0;
    }

    if (restamount != 0 && restamount % 50 != 0)
    {
        printf("%d moeda(s) de R$ 0.50\n", restamount / 50);
        restamount = (restamount % 50);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.50\n");
    }


    if (restamount != 0 && restamount >= 25)
    {
        printf("%d moeda(s) de R$ 0.25\n", restamount / 25);
        restamount = (restamount % 25);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.25\n");
    }
    if (restamount != 0 && restamount >= 10)
    {
        printf("%d moeda(s) de R$ 0.10\n", restamount / 10);
        restamount = (restamount % 10);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.10\n");
    }

    if (restamount != 0 && restamount >= 5)
    {
        printf("%d moeda(s) de R$ 0.05\n", restamount / 5);
        restamount = (restamount % 5);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.05\n");
    }

    if (restamount != 0 && restamount >= 1)
    {
        printf("%d moeda(s) de R$ 0.01\n", restamount / 1);
        restamount = (restamount % 1);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.01\n");
    }
    return 0;
}