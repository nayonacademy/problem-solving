#include <bits/stdc++.h>
using namespace std;

int main()
{   int alcool=0, gasoline=0, diesel=0;
    while(true)
    {
        int n;
        cin >> n;
        if (n == 1){
            alcool +=1;
        }else if(n==2){
            gasoline +=1;
        }else if(n==3){
            diesel +=1;
        }else if(n==4){
            break;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}