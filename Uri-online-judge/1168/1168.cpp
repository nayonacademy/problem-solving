#include <bits/stdc++.h>
using namespace std;

int main(){
    string led;
    long int n;
    cin >> n;
    for (int i=0; i<n;i++){
        int count = 0;
        cin >> led;
        for(int j=0;j<led.length();j++){
            if (led[j]=='1'){
                count += 2;
            }else if (led[j]=='2'){
                count += 5;
            }else if (led[j]=='3'){
                count += 5;
            }else if (led[j]=='4'){
                count += 4;
            }else if (led[j]=='5'){
                count += 5;
            }else if (led[j]=='6'){
                count += 6;
            }else if (led[j]=='7'){
                count += 3;
            }else if (led[j]=='8'){
                count += 7;
            }else if (led[j]=='9'){
                count += 6;
            }else if (led[j]=='0'){
                count += 6;
            }

        }
        cout << count << " leds" << endl;
    }
    
   return 0;
}