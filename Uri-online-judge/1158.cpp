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
        for (int j=a;j<a+b+b;j++){
            if(j%2==1){
                result +=j;
            }else{

            }
        }
        cout << result << endl;
    }
    
    return 0;
}