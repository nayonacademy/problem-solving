#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for(long long int i =0; i < n; i++)
    {
        long long int a, b;
        cin >> a;
        if (a > 2015){
            cout << (a-2014) << " A.C." << endl;
        }else if(a < 2015){
            cout << 2015-a << " D.C." << endl;
        }
        else{
            cout << 1 << " A.C." << endl;
        }

    }
    return 0;
}