#include <bits/stdc++.h>
using namespace std;
int main(){
    int l;
    char S;
    double total = 0.0;
    double N[12][12];
    cin >> l;
    cin >> S;
    for(int i = 0;i<12;i++){
        for (int j=0;j<12;j++){
            cin >> N[i][j];
            if (j==l){
                total +=N[i][j];
            }
        }
    }
    if (S=='S'){
        cout << fixed << setprecision(1) << total << endl;
    }else{
        cout << fixed << setprecision(1) << total/12.0 << endl;
    }
    return 0;
}