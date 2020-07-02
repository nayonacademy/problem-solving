#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        long int a,b;
        double c,d;
        double first, second;
        int yr;
        cin >> a >> b >> c >> d;
        c = c/100;
        d = d/100;
        first = (a*c)+a;
        second = (b*d)+b;
        cout <<  first << endl;
        cout << second << endl;
        // yr = (first*second)/c;
        // cout << yr;
    }
    return 0;
}