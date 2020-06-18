#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int n = 3;
    for (int i =0; i < n; i++){
        int first = arr[0];
        for (int j=0;j<len; j++){
            arr[j] = arr[j+1];
        }
        arr[len-1] = first;
    }
    for(int k = 0; k < len; k++){
        cout << arr[k] << " ";
    }
    return 0;
}