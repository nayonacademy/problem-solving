#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, count=0;
    for(int i=0;i<5;i++){
        cin >> a;
        a = abs(a);
        if (a % 2 == 0)
        {
            count +=1;
        }
    }
    cout << count << " valores pares" << endl;
    return 0;
}