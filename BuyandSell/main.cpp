#include <iostream>
#include "StockTrader.h"

using namespace std;
int main(){
    StockTrader stockTrader;

    // user input: stock price data
    int numPrices;
    cout << "Enter the number of stock prices: ";
    cin >> numPrices;

    vector<int> prices(numPrices);
    cout << "Enter stock prices: ";
    for(int i=0; i<numPrices; i++){
        cin >> prices[i];
    }

    //user input: number of transacions
    int numTransactions;
    cout << "Enter the number of transactions: ";
    cin >> numTransactions;
 
    //calculate and display results
    if(numTransactions == 1){
        int maxProfit = stockTrader.maxProfitOneTransactions(prices);
        cout << "Maximum profit for 1 transaction: "<< maxProfit << endl;
    }else if(numTransactions == 3){
        int maxProfit = stockTrader.maxProfitThreeTransactions(prices);
        cout << "maximum profit for 3 transactions: "<< maxProfit << endl;
    }else{
        int maxProfit = stockTrader.maxProfitNTransactions(prices, numTransactions);
        cout << "Maximum profit for " << numTransactions << "transactions: " << maxProfit << endl;
    }
    return 0;
}