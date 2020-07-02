#include <iostream>
using namespace std;

int main()
{
    int n, a, two, three, four, five;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a%2==0) two++;
        if (a%3==0) three++;
        if (a%4==0) four++;
        if (a%5==0) five++;
    }
    cout << two << " Multiplo(s) de 2\n";
    cout << three << " Multiplo(s) de 3\n";
    cout << four << " Multiplo(s) de 4\n";
    cout << five << " Multiplo(s) de 5\n";

}