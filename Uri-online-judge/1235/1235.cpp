#include <bits/stdc++.h>
using namespace std;

int main(){
    string sentence;
    string final_sentence;
    int sen_len;
    getline(cin, sentence);

    if (sentence.length()%2==0){
        sen_len = sentence.length()/2;
    }else{
        sen_len = sentence.length() -1 / 2;
    }

    // for (int i = sen_len; i >= 0; i--)
    // {
    //     cout << sentence[i];
    //     cout
    // }
    for (int i = 9; i >= 0; --i)
    {
        cout << sentence[i];
    }
        return 0;
}