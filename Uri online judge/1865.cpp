// URI Online Judge | 1865
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<= n){
        char word[15];
        int num;
        cin >> word;
        cin >> num;
        if (word[0] == 'T' && word[1] == 'h' && word[2] == 'o' && word[3] == 'r'){
            cout << 'Y' << "\n";
        }else{
            cout << 'N' << "\n";
        }
        ++i;
    }

    return 0;
}