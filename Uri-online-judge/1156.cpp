#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sum = 1.00;
    int b = 2;
    for (int i=3;i<=39;i=i+2){
        sum +=  i * 1.00/ (float)b;
        b *=2;
    }
    cout << fixed << setprecision(2)<< sum << endl;
    return 0;
}