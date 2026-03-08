// Question 2
// Stock Buy and Sell
#include<iostream>
#include<algorithm>
using namespace std;

int maxProfit(int prices[], int n){
    int bestBuy = prices[0]; // assuming bestBuy starts from index 0
    int maxProfit = 0;
    for(int i = 1; i<n; i++){
        if(prices[i]> bestBuy){ 
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int res = maxProfit(prices, n);
    cout << "Max Profit would be: " << res << endl;
    return 0;
}