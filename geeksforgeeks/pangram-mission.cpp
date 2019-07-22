// c++ program to find characters that needs to be added to make pangram
#include <bits/stdc++.h>
using namespace std;

const int   MAX_CHAR = 26;

// Return s charactes thata need to be added to make str
string missingChars(string str)
{
    // A boolean array to store characers
    // present in string
    bool present[MAX_CHAR] = {false};

    // Traverse string and mark characters presendt in string
    for (int i=0;i<str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            present[str[i] - 'a'] = true;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            present[str[i] - 'A'] = true;
    }
    // Store missing characters in alphabetic order
    string res = "";
    for (int i = 0; i < MAX_CHAR; i++)
        if (present[i] == false)
            res.push_back((char)(i+'a'));
    return res;
}

