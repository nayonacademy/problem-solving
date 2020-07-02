#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    
    while(true){
        cin >> a;
        if(a==0){
            break;
        }else{
            for(int i = 1; i<=a; i++){
                cout << i;
                cout << ((i==a) ? "\n" : " ");
            }
        }
    }
    return 0;
}