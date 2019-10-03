#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    int n = 4;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>= n - (i-1) && j <= n+(i-1)){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// https://www.youtube.com/watch?v=KdM6OrvcjPI