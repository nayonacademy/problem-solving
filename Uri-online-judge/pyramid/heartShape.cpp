#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    for (row=0;row<=5;row++){
        for(col=0;col<=6;col++){
            if((row == 0 && col%3 !=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8)){
                cout << "*";
            }else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}