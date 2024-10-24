#include "StockTrader.h"
#include <algorithm>

//function to calculate the maximum profit with one transaction

int StockTrader::maxProfitOneTransactions(vector<int>& prices){
    if(prices.empty()) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i=1; i<prices.size(); i++){
        maxProfit = max(maxProfit, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }
    return maxProfit;
}

//Function to calculate the maximum profit with exactly three transactions
int StockTrader::maxProfitThreeTransactions(vector<int>& prices){
    int k = 3;
    return maxProfitNTransactions(prices, k);
}

//function to calculate the maximum profit with N transactions
int StockTrader::maxProfitNTransactions(vector<int>& prices, int n){
    int len = prices.size();
    if(len == 0 || n == 0) return 0;

    //if N is greater than half the number of days, it means we can treat it as unlimited transactions.
    if(n > len/2){
        int maxProfit = 0;
        for(int i=1; i<len; i++){
            if(prices[i] > prices[i-1]){
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
    }

    // create DP tables
    vector<vector<int>> dp(n+1, vector<int>(len , 0));

    for(int t = 1; t<=n; t++){
        int maxDiff = -prices[0];
        for(int d = 1; d < len; d++){
            dp[t][d] = max(dp[t][d-1] , prices[d] + maxDiff);
            maxDiff = max(maxDiff,dp[t - 1][d] - prices[d]);
        }
    }
    return dp[n][len - 1];
} 