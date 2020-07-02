#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, aux;
    cin >> a >> b;
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
    for(int i=a+1; i<b; i++)
    {
        if(i%5==3 || i%5==2){
            cout << i << endl;
        } 
    }
    return 0;
}