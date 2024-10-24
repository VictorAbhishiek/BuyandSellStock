#ifndef STOCKTRADER_H
#define STOCKTRADER_H

#include <vector>
using namespace std;

class StockTrader{
    public:
        int maxProfitOneTransactions(vector<int>& prices);
        int maxProfitThreeTransactions(vector<int>& prices);
        int maxProfitNTransactions(vector<int>& prices, int n);
}; 

#endif //STOCKTRADER_H