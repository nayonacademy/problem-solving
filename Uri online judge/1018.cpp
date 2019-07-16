#include <stdio.h>

int main(){
    int banknotes;
    int restamount = 0;
    scanf("%d",&banknotes);
    printf("%d\n", banknotes);
    if (banknotes % 100 !=0){
        printf("%d nota(s) de R$ 100,00\n",banknotes/100);
        restamount = (banknotes % 100);
    }
    else
    {
        printf("0 nota(s) de R$ 100,00\n");
        restamount = 0;
    }
    
    //printf("Testing :: %d\n",restamount);

    if (restamount != 0 && restamount % 50 !=0)
    {
        printf("%d nota(s) de R$ 50,00\n", restamount / 50);
        restamount = (restamount % 50);
    }
    else
    {
        printf("0 nota(s) de R$ 50,00\n");
    }

    //printf("Testing :: %d\n", restamount);
    if (restamount != 0 && restamount >= 20)
    {
        printf("%d nota(s) de R$ 20,00\n", restamount / 20);
        restamount = (restamount % 20);
    }
    else
    {
        printf("0 nota(s) de R$ 20,00\n");
    }
    if (restamount != 0 && restamount >= 10)
    {
        printf("%d nota(s) de R$ 10,00\n", restamount / 10);
        restamount = (restamount % 10);
    }
    else
    {
        printf("0 nota(s) de R$ 10,00\n");
    }

    if (restamount != 0 && restamount >= 5)
    {
        printf("%d nota(s) de R$ 5,00\n", restamount / 5);
        restamount = (restamount % 5);
    }
    else
    {
        printf("0 nota(s) de R$ 5,00\n");
    }

    if (restamount != 0 && restamount >= 2)
    {
        printf("%d nota(s) de R$ 2,00\n", restamount / 2);
        restamount = (restamount % 2);
    }
    else
    {
        printf("0 nota(s) de R$ 2,00\n");
    }

    if (restamount != 0 && restamount >= 1)
    {
        printf("%d nota(s) de R$ 1,00\n", restamount / 1);
    }
    else
    {
        printf("0 nota(s) de R$ 1,00\n");
    }
    return 0;
}