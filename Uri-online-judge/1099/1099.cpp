#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    for (int i=0;i<n;i++){
        int total = 0;
        cin >> a >> b;
        if (a<b){
            for(int j=a+1;j<b;j++){
                if (j%2==1){
                    total +=j;
                }
            }
        }
        else if (a > b)
        {
            for (int j = a-1; j > b; j--)
            {
                if (j % 2 == 1)
                {
                    total += j;
                }
            }
        }else{
            total = 0;
        }
        cout << total << endl;

    }
    return 0;
}