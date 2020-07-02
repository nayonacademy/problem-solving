#include <bits/stdc++.h>
using namespace std;
int main()
{
    string present_position, expected_position;
    int diff_one, diff_two;
    cin >> present_position >> expected_position ;
    diff_one = abs(present_position[0] - expected_position[0]);
    diff_two = abs(present_position[1] - expected_position[1]);

    if (diff_one == 2 || diff_two == 2){
        cout << "VALIDO" << endl;
    }else{
        cout << "INVALIDO" << endl;
    }
    return 0;
}