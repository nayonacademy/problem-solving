#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n=1;
    cin >> a >> b;
    for(int i=1;i<=b;i++){
        if(n==a){
            cout << i << "\n";
            n =1;
        }else{
            cout << i << " ";
            n++;
        }
    }
    return 0;
}