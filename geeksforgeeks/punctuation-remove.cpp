#include <iostream>
using namespace std;

int main()
{
    string str = "Welcome???@@##$ to#$% uri%$^ online $%^&judges";
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        if (ispunct(str[i])){
            str.erase(i--, 1);
            len = str.size();
        }
    }
    cout << str;
    return 0;
}