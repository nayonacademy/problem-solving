#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total=0,coelhos=0,ratos=0,sapos=0;
    double coelhos_r,ratos_r,sapos_r;
    int a,n;
    string c;
    cin >>  n;
    for (int i=0;i<n;i++){
        cin >> a >> c;
        if (c=="C"){
            total += a;
            coelhos += a; 
        }else if(c=="R"){
            total += a;
            ratos += a; 
        }else if(c=="S")
        {
            total += a;
            sapos += a;             
        }
    }
    cout << "Total: " << total<<" cobaias"<< endl;
    cout << "Total de coelhos: "<< coelhos << endl;
    cout << "Total de ratos: "<< ratos << endl;
    cout << "Total de sapos: "<< sapos << endl;
    coelhos_r = ((coelhos*1.0) / total)*100;
    ratos_r = ((ratos*1.0) / total)*100;
    sapos_r = ((sapos*1.0) / total)*100;
    cout << "Percentual de coelhos: " << fixed << setprecision(2)<< coelhos_r << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2)<< ratos_r << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2)<< sapos_r << " %" << endl;
    return 0;
}