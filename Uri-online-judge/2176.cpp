// URI Online Judge | 2176 Parity

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a = 0;
    cin >> s;
    for (int i=0; i < s.length();i++){
        if (s[i]=='1'){
            a +=1;
        }
    }

    if (a%2==1){
        s = s+'1';
    }else{
        s = s+'0';
    }
    cout<<s<<endl;
    return 0;
}