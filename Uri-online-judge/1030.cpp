#include <bits/stdc++.h>
using namespace std;

int jesephus(int n, int k){
    if(n==1){
        return 1;
    }else{
        return (jesephus(n-1,k)+k-1) % n+1;
    }
}

int main()
{
    int n,k, N;
    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> n >> k;
        cout << "Case " << i << ": " << jesephus(n,k) << endl;
    }

    return 0;
}