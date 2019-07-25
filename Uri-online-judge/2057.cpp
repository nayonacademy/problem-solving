#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, total, result;
    cin >> a >> b >> c;
    total = a + b + c;
    if(total < 24 && total >0)
    {
        result = total;
    }else if(total > 24){
        result = total - 24;
    }else if(total < 0){
        result = total + 24;
    }
    cout << result << endl;
    return 0;
}