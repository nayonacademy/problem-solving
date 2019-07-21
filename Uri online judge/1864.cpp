#include <iostream>
using namespace std;

int main()
{   
    int n;
    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED";
    cin >> n;
    cout << quote.substr(0,n) << "\n";
}