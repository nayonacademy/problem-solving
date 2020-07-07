#include <bits/stdc++.h>
using namespace std;

void currencyCurrecny(int amount)
{
    int notes[9] = {2000,500,200,100,50,20,10,5,1};
    int notesCounter[9] = {0};

    // count notes using Greedy approch
    for(int i = 0; i < 9;i++){
        if (amount >= notes[i]) {
            notesCounter[i] = amount / notes[i];
            amount = amount - notesCounter[i] * notes[i];
        }
    }
    // print notes
    for(int i = 0; i < 9; i++)
    {     
       cout << notes[i] << " : " << notesCounter[i] << endl;   
    }
}

int main()
{
    int amount = 868;
    currencyCurrecny(amount);
    return 0;
}