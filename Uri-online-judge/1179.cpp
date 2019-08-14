#include <bits/stdc++.h>
using namespace std;
int par[];
int par_index=0;
int impar [];
int impar_index=0;
int a;
int main()
{
    for(int i=0; i<15;i++){
        cin >> a;
        if (a%2==0){
            par[par_index] = a;
            par_index +=1;
        }else{
            impar[impar_index] = a;
            impar_index +=1;
        }

    }
    cout << "par";
    for (int i=0;i<par.length();i++){
        cout << par[i] << endl;
    }
    cout << "impar";
    for (int i = 0; i < impar.length(); i++)
    {
        cout << impar[i] << endl;
    }
    return 0;
} 