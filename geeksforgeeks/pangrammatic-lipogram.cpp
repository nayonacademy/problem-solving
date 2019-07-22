// C++ program to check if a string is pangrammatic lipogram

#include <bits/stdc++.h>
using namespace std;

string alphabets = "abcdefghijklmnopqrstuvwxyz";
/*
pangram                 0
lipogram                >1
pangrammatic lipgram    1
*/

// function to check for a pangramtic lipogram
void panLipogramChecker(string s)
{
    // convert string to lower case
    for (int i=0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    // variable to keep count of all the letters
    // not found in the string

    int counter = 0;

    // traverses the string for every
    // letter of the alphabet
    for(int i=0; i < 26; i++)
    {
        int pos = s.find(alphabets[i]);
        // if character not found in string
        // then increemnt count
        if(pos<0 || pos >s.length())
            counter +=1 ;
    }
    if (counter == 0)
        cout << "Pangram" << endl;
    else if ( counter >=2)
        cout << "Not a pangram but might a lipogram" << endl;
    else
        cout << "Pangrammatic Lipogram" << endl;
}

int main()
{
    string str = "The quick brown fox jumped over the lazy dog"; 
    panLipogramChecker(str); 
      
    str = "The quick brown fox jumps over the lazy dog"; 
    panLipogramChecker(str); 
      
    str = "The quick brown fox jum over the lazy dog"; 
    panLipogramChecker(str); 
    return 0;
}