#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, even=0,odd=0,positive=0,negative=0;
    for (int i =0;i<5;i++)
    {
        cin >> a;
        if (a>0){
            positive +=1;
        }
        if(a<0){
            negative +=1;
        }
        a = abs(a);
        if (a%2==0){
            even +=1;
        }
        if (a % 2 == 1)
        {
            odd += 1;
        }
    }
    cout << even<<" valor(es) par(es)" << endl;
    cout << odd <<" valor(es) impar(es)" << endl;
    cout << positive<<" valor(es) positivo(s)" << endl;
    cout << negative<<" valor(es) negativo(s)"<< endl;
    return 0;
}