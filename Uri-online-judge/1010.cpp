//1010 - Simple Calculate
#include <stdio.h>
int main()
{
    int pro_one, pro_two, uni_one, uni_two;
    double price_one, price_two, pagar;
    scanf("%d %d %lf", &pro_one, &uni_one, &price_one);
    scanf("%d %d %lf", &pro_two, &uni_two, &price_two);
    pagar = (uni_one * price_one) + (uni_two * price_two);
    printf("VALOR A PAGAR: R$ %.2f\n", pagar);
    return 0;
}