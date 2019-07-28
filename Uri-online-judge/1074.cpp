#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(a < 0 && abs(a)%2==1){
            cout << "ODD NEGATIVE" << endl;
        }else if(a < 0 && abs(a)%2==0)
        {
            cout << "EVEN NEGATIVE" << endl;
        }else if(a > 0 && abs(a)%2==1){
            cout << "ODD POSITIVE" << endl;
        }else if(a > 0 && abs(a)%2==0)
        {
            cout << "EVEN POSITIVE" << endl;
        }else if(a==0){
            cout << "NULL" << endl;
        }
    }
    return 0;
}