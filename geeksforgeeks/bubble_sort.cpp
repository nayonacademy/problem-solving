#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int num[n];
    for(int i = 1;i<n;i++){
        for(int j=1;j<n;j++){
            if(num[j+1]< num[j]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    return 0;
}