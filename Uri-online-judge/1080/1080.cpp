#include <bits/stdc++.h>
using namespace std;

int main()
{
    int aux = 0,position=0;
    int a;
    for (int i = 1; i <= 100; i++)
    {
        cin >> a;
        if (a > aux){
            aux = a;
            position = i;
        }

    }
    cout << aux << endl;
    cout << position << endl;
    return 0;
}