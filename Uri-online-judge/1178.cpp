#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double temp;
    cin >> temp;
    cout << "N[0] = " << fixed << setprecision(4) <<temp << endl;
    for (int i = 1; i < 100; i++)
    {
        temp = temp/2;
        cout << "N["<< i <<"] = " << fixed << setprecision(4) << temp << endl;
    }
    return 0;
}