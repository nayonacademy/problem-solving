// Game Time with Minutes 1047
#include <iostream>
using namespace std;

int main(){
    int start_h, start_m, final_h, final_m, hour, minutes;
    cin >> start_h >> start_m >> final_h >> final_m;
    hour = final_h - start_h;
    
    if (hour < 0){
        hour = 24 + (final_h - start_h);
    }

    minutes = final_m - start_m;
    if (minutes < 0)
    {
        minutes = 60 + (final_m - start_m);
        hour--;
    }
    if (start_h == final_h && start_m == final_m){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    }else{
        cout << "O JOGO DUROU "<< hour <<" HORA(S) E "<< minutes <<" MINUTO(S)\n";
    }
    return 0;
}