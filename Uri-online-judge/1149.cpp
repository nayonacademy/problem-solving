#include <bits/stdc++.h>
using namespace std;

#include <stdio.h>

int main()
{
    int a,b,aux;
    
        while (cin >>a)
        {
            int total = 0;
            cin >> b;
            while(b <= 0){
                cin >> b;
            }
            for(int i=0;i<b; i++){
                total += (a+i);
            }
            cout << total << endl;
        }
        
    return 0;
}