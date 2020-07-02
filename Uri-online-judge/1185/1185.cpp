#include <bits/stdc++.h>
using namespace std;
int main(){
    char S;
    double N[12][12];
    double total;
    cin >> S;
    for (int y=0; y < 12; y++){
        for (int x=0; x < 12; x++){
            cout >> y >> x >> endl;
            cin >> N[y][x];
            if(y>x){
                total += N[y][x];
            }
        }
    }
    if(S=='S'){
        cout << fixed << setprecision(1) << total << endl;
    }else{
        cout << fixed << setprecision(1) << total/66.0 << endl;
    }
    return 0;
}