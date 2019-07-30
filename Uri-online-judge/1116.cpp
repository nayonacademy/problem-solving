#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a, b, result;
        cin >> a >> b;
        // result = (a) / b;
        if(b==0){
            cout << "divisao impossivel" << endl;
        }else{
            cout << fixed << setprecision(1) << (a*1.00)/b << endl;
        }
    }
    return 0;
}