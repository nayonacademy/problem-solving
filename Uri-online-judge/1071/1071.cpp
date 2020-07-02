#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;
    cin >> a >> b;
    if(a==b){
        cout << c << endl;
    }else if(a<b)
    {
        for(a=a+1;a<b;a++)
        {
            if(a%2==1||a%2==-1)
                c+=a;
        }
        cout << c << endl;
    }
    else if(a>b)
    {
        for(b=b+1;b<a;b++)
        {
            if(b%2==1||b%2==-1)
                c+=b;
        }
        cout << c << endl;
    }
    return 0;
}
