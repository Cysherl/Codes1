#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int i = 0, j = 1, n = prices.size();
        int profit = 0;
        for (i = 1; i < n; i++)
            if (prices[i]>prices[i-1])
                profit += prices[i]-prices[i-1];
        return profit;
    }
};
