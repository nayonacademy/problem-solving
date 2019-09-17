#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int num[n];
    for(int i=0;i<n;i++){
        x = num[i];
        j = i - 1;
        while(j>=1 && num[j]>x){
            num[j+1] = num[j];
            j--;
        }
        num[j+1] = x;
    }
    return 0;
}