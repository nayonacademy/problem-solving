#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string word;
    int word_length;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> word;
        word_length = word.length();
        if (word_length == 5){
            if (word[0] == 't' || word[4]=='e'){
                cout << 3 << endl;
            }
            else if (word[0] == 's' || word[4] == 'n')
            {
                cout << 7 << endl;
            }
            else if (word[0] == 'e' || word[4] == 't')
            {
                cout << 8 << endl;
            }
        }
        if (word_length == 4)
        {
            if (word[0] == 'f' || word[3] == 'r')
            {
                cout << 4 << endl;
            }
            else if (word[0] == 'f' || word[3] == 'e')
            {
                cout << 5 << endl;
            }
            else if (word[0] == 'n' || word[3] == 'n')
            {
                cout << 9 << endl;
            }
        }
        if (word_length == 3)
        {
            if (word[0] == 'o' || word[2] == 'e')
            {
                cout << 1 << endl;
            }
            else if (word[0] == 't' || word[2] == 'o')
            {
                cout << 2 << endl;
            }
            else if (word[0] == 's' || word[2] == 'x')
            {
                cout << 6 << endl;
            }
            else if (word[0] == 't' || word[2] == 'n')
            {
                cout << 10 << endl;
            }
        }
    }
    return 0;
}