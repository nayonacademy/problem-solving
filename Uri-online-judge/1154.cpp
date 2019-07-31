#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total=0,count=0;
    while(true){
        int a;
        cin >> a;
        if (a<0){
            break;
        }else{
            count +=1;
            total +=a;
        }
    }
    cout << fixed << setprecision(2)<< total*1.00/count << endl;
    return 0;
}