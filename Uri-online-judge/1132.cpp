#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total=0, x, y,aux;
    cin >> x >> y;
    if (x > y){
        aux = x;
        x = y;
        y = aux;
        
    }

    for (int i = x; i<=y;i++)
    {
        if(i%13 !=0){
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}