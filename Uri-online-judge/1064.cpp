#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,total,count;
    for(int i=0; i< 6 ;i++){
        cin >> a;
        if(a > 0)
        {
            total += a;
            count +=1;
        }
    }
    cout << count <<" valores positivos" << endl;
    cout << fixed << setprecision(1) << total/count << endl;
    return 0;
}