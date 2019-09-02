#include <bits/stdc++.h>
using namespace std;

void leftRotatebyONe(int arr[], int n)
{
    int temp = arr[0], i;
    for (i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }else{
        arr[i] = temp;
    }
}
int main(){
    return 0;
}