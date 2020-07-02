#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count=0;
    cin >> a >> b;

    while(b<=a){
        cin >> b;
        count +=1;
    }
    cout << a << b << endl;
    return 0;
}