#include <bits/stdc++.h>
using namespace std;
int main()
{
    double N[12][12];
    char p;
    int c=0, m=6, n=5;
    double soma = 0.0;
    cin >> p;
    for (int i=0; i < 12; i++)
    {
        for (int j=0; j < 12; j++)
        {
            cin >> N[i][j];
            // if (j < (11 - i) && j < i)
            // if(i > 6)
            // {
            //     soma +=N[i][j];
            // }
            
        }
        
    }
int i=7;
while(i<=11)
    
     {   
         for(int j = n; j<=m; j++){
           
            soma = soma+N[i][j];
        
            // c++;
        }
            m++;
            n--;
        i++;
        }
  
    if (p=='S')
        cout<<fixed<<setprecision(1)<< soma<<endl;
    else
        cout << soma/30.00<<endl;
    return 0;
}