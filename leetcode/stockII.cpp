#include <bits/stdc++.h>
using namespace std;

class Solustion{
    public:
    int maxProfit(vector<int>& prices){
        int total = 0;
        for (int i = 1; i < prices.size();i++){
            if (prices[i] > prices[i - 1]){
                total += prices[i] - prices[i - 1];
            }
                
        }
        return total;
    }
}