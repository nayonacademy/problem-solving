#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double a,b,c,average;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        a = a + a;
        b = b + b + b;
        c = c + c + c + c + c;
        average = (a + b + c)/10;
        cout << fixed << setprecision(1) << average << endl;
    }
    return 0;
}