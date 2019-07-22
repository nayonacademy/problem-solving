// Pangram Checking
#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string &str)
{
    // create a hash table to mark the characters
    // present in the string
    vector<bool> mark(26, false);
    // for indexing in mark[]
    int index;

    // Traverse all characters
    for (int i =0 ; i<str.length();i++)
    {
        // if upper characer, substaract 'A'
        // to find index.
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
        // if lowercase characer, substract 'a'
        // to find index
        else if ('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
        // mark current character
        mark[index] = true;
    }
    // Return false if any character is unmarked
    for (int i=0; i<=25; i++)
        if (mark[i] == false)
            return (false);
    // if all characters werer present        
    return (true);
}

int main()
{
    string str = "The quick brown fox jumps over the lazy dogs";
    if (checkPangram(str)==true)
        printf("%s is pangram", str.c_str());
    else
        printf("%s is not pangram",str.c_str());
    return 0;
}