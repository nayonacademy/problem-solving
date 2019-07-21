#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (a%2==1){
        // white
        if(b%2==0){
            cout << "1\n";
        }else{
            cout << "0\n";
        }

    }else{
        cout << "0\n";
    }
    return 0;
}