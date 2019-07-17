// 1019 - Time Conversion
#include <stdio.h>
int main()
{
    int n, hr, minu, sec;
    scanf("%d", &n);
    if (n > 3600)
    {
        minu = n / 60;
        sec = n % 60;
        hr = minu / 60;
        minu = minu % 60;
        printf("%d:%d:%d\n", hr, minu, sec);
    }
    else
    {
        minu = n / 60;
        sec = n % 60;
        printf("0:%d:%d\n", minu, sec);
    }
    return 0;
}