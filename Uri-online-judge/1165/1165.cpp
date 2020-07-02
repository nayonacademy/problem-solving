#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int j=0;j<a;j++){
        int n;
        bool isPrime = true;
        cin >> n;
        for(int i=2;i<n/2;++i){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << n << " eh primo" << endl;
        }else{
            cout << n << " nao eh primo" << endl;
        }
    }
    return 0;
}