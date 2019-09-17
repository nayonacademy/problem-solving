#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int num[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]>num[j]){
                swap(num[i],num[j]);
            }
        }
    }
    return 0;
}