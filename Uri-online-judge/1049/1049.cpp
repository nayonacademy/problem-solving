#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    if (a == "vertebrado"){
        cin >> a;
        if (a=="ave"){
            cin >> a;
            if (a=="carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else {
            cin >> a;
            if(a=="onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else {
        cin >> a;
        if (a == "inseto")
        {
            cin >> a;
            if (a == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else
            {
                cout << "lagarta" << endl;
            }
        }
        else {
            cin >> a;
            if (a == "hematogago")
            {
                cout << "sanguessuga" << endl;
            }
            else
            {
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
