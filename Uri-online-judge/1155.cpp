#include <bits/stdc++.h>
using namespace std;

int main()
{
    float sum =0.00;
    for (int i=1;i<=100;i++){
        sum += 1/(float)i;
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}