// 1017 - Fuel Spent

#include <iostream>

using namespace std;

int main()
{
    int spendtime;
    int speedkm;
    double totalkm;
    double totalltr;
    double km = 12;
    double ltr = 1;
    cin >> spendtime;
    cin >> speedkm;
    totalkm = spendtime * speedkm;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    totalltr = (ltr / km) * totalkm;
    cout << totalltr << endl;
    return 0;
}