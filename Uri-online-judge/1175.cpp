#include <iostream>
using namespace std;

int main()
{
    int N[20];
    
    for(int i=0; i<3; i++){
        int a;
        cin >> a;
        N[i] = a;
    }

    cout << N[0];
    return 0;
}