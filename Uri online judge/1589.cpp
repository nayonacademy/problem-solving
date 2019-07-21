// URI Online Judge | 1589
// Bob Conduit

#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while(i <=n){
        int a, b, result;
        cin >> a >> b;
        result = a + b;
        cout << result << "\n";
        ++i;
    }
    return 0;
}