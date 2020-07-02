#include <iostream>
using namespace std;

int main()
{
    int N[20], temp;
    
    for(int i=0; i<20; i++){
        int a;
        cin >> a;
        N[i] = a;
    }
    for(int i=0, j=19; i<10; i++, j--)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(int i=0; i<20; i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}