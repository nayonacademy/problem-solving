#include <bits/stdc++.h>
using namespace std;

int main(){
    double A[100];
    for (int i=0; i<=99;i++){
        double a;
        cin >> a;
        A[i] = a;
    }

    for(int i=0; i<=99; i++)
    {
        if(A[i]<=10.0)
        {
            printf("A[%d] = %.1lf\n",i, A[i]);
        }   
    }
    return 0;
}