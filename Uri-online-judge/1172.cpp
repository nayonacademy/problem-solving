#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    for (int i=0;i<10;i++){
        int X[10];
        int a;
        cin >> a;
        if (a<=0){
           cout << "X["<<i<<"]" <<" = "<< 1 << endl;
        }else{
            cout << "X["<<i<<"]" <<" = "<< a << endl;
        }
    }
    return 0;
}