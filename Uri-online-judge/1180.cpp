#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,p=0;
    cin >> a;
    int my_array [a];
    for (int i=0; i<a;i++)
    {
        int b;
        cin >> b;

        my_array[i] = b;
    }
    int min = my_array[0];
    for (int i = 1; i < a; i++)
    {
        if (min > my_array[i]){
            min = my_array[i];
            p = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << p << endl;
    return 0;
}