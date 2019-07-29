#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, aux;
    int sum;
    while(cin >> a >> b){
        if (a <= 0 || b <= 0){
            break;
        }else if(a==b){
            cout << a << " Sum=" << a << endl;
        }
        
        if (a>b){
            aux = a;
            a = b;
            b = aux;
        }
        sum = 0;
        for (int i=a;i<=b;i++){
            cout << i << " ";
            sum +=i;
        }
        cout << "Sum=" << sum << endl;
        
    }
    return 0;
}