#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n,temp=1;
    cin >> n;
    temp = n;
    cout << "N["<<0<<"] = " << n << endl; 
    for (int i=1;i<10;i++){
        cout << "N["<<i<<"] = " << temp * 2 << endl; 
        temp = temp * 2;
    }
    return 0;
}