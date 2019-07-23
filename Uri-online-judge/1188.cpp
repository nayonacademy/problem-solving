#include <iostream>
using namespace std;
int main()
{
    double N[12][12];
    char p;
    double soma = 0.0;
    cin >> p;
    for (int i=0; i < 12; i++)
    {
        for (int j=0; i< 12; j++)
        {
            cin >> N[i][j];
            if (j < (11 - i) && j < i)
            {
                soma +=N[i][j];
            }
        }
    }
    if (p=='S')
        cout << soma;
    else
        cout << soma/30.00;
    return 0;
}