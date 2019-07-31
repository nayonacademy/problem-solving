#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n!=0){
        int sum = 0;
        for (int i=n;i<=n+9; i++){
            if(i%2==0){
                sum += i;
            }
        }
        cout << sum << endl; 
    }
    
    return 0;
}