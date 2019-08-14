#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0 ; i < n; i++)
    {
        int a, b, result=0;
        cin >> a >> b;

        if(a%2 !=0){
            result +=a;
        }else{
            a +=1;
            result +=a;
        }


        for (int j=0;j<b-1;j++){
            a +=2;
            result +=a;
        }
        cout << result << endl;
    }
    
    return 0;
}