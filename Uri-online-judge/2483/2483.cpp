#include <iostream>
using namespace std;
int main()
{
    char sentence_start[] = "Feliz nat";
    char sentence_end[] = "l!";
    int n;
    string word;
    cin >> n;
    for (int i=0; i< n;i++){
        word += 'a';
    }
    cout << sentence_start << word << sentence_end << "\n";
    return 0;
}