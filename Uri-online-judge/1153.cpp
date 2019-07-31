#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total=1;
    cin >> n;
    for(int i=0;i<n;i++){
        if (i==0){
            total *= n;
        }else{
            total *= (n-i); 
        }
    }
    cout << total << endl;
    return 0;
}