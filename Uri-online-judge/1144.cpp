#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin >> a;
    for (int i = 1; i <= a; i++){
        b = i * i ;
        c = i * i * i ;
        cout << i << " " << b << " " << c << "\n";
        d = b + 1;
        e = c + 1;
        cout << i << " " << d << " " << e << "\n";
    }
    return 0;
}