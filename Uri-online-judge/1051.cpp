#include <bits/stdc++.h>
using namespace std;

int main(){
    float n, r;
    cin >> n;
    if (n <=2000.00){
        cout << "Isento" << endl;
    }
    else if(n >=2000.01 && n <=3000.00){
        r = (n - 2000.00)*.08;
        cout << "R$ "<< fixed << setprecision(2) <<r << endl;
    }else if(n >= 3000.01 and n <= 4500.00){
        r = (n-3000)*.18 + 1000.00*.08;
        cout << "R$ "<< fixed << setprecision(2) <<r << endl;
    }else if(n >= 4500.01){
        r = (n-4500)*.28 + 1500*.18 + 1000*.08;
        cout << "R$ "<< fixed << setprecision(2) <<r << endl;
    }
    
    return 0;
}