// 1046 - Game Time
#include <stdio.h>
int main()
{
    int starttime, endtime, result;
    scanf("%d %d", &starttime, &endtime);
    result = endtime - starttime;

    if (result < 0)
    {
        result = 24 + (endtime - starttime);
    }
    if (starttime == endtime)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", result);
    }

    return 0;
}