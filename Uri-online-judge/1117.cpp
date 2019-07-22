// URI Online Judge | 1117
// Score Validation
# include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    b = 0;
    c = 0;
    while(true){
        cin >> a;
        if (a < 0 || a > 10 ){
            cout << "nota invalida\n";
        }else if(c==0){
            b = a ;
            c = 1;
        }else{
            cout << "media = " << (a+b)/2 << "\n";
            break;
        }
    }
    return 0;
}