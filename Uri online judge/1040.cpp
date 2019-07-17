// 1040 Average 3
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a, b, c, d, e,total, average, newaverage;
    cin >> a >> b >> c >> d;
    total = (a * 2 + b * 3 + c * 4 + d);
    average = total / 10;
    cout << "Media: " << fixed << setprecision(1) << average << "\n";
    
    if (average >= 7.0){
        cout << "Aluno aprovado.\n";
    }else if(average >= 5.0){
        cout << "Aluno em exame.\n";
        cin >> e;
        cout << "Nota do exame: " << e << "\n";
        newaverage = (average + e) / 2;
        if (newaverage >= 5.0)
        {
            cout << "Aluno aprovado.\n";
        }
        else if (newaverage < 5.0)
        {
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << newaverage << "\n";
    }else if(average < 5.0){
        cout << "Aluno reprovado.\n";
    }
    return 0;
}