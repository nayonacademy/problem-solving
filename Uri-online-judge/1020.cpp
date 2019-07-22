// 1020 - Age in Days
#include <stdio.h>
int main()
{
    int timevalue, y, m, mnth, d;
    scanf("%d", &timevalue);
    if (timevalue > 365)
    {
        y = timevalue / 365;
        m = timevalue % 365;
        mnth = m / 30;
        d = m % 30;

        printf("%d ano(s)\n", y);
        printf("%d mes(es)\n", mnth);
        printf("%d dia(s)\n", d);
    }
    else
    {
        m = timevalue % 365;
        mnth = m / 30;
        d = m % 30;
        printf("0 ano(s)\n");
        printf("%d mes(es)\n", mnth);
        printf("%d dia(s)\n", d);
    }
    return 0;
}