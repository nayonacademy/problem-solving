#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while(cin>>a){
        if (a==0){
            break;
        }else{
            int sum=0;
            for(int i=a;i<a+10;i++){
                if(i%2==0){
                    sum +=i;
                }
            }
            cout << sum << endl;
        }
    }
    
    return 0;
}