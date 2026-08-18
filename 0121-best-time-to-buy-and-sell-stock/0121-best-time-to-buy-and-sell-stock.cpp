class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() ==1) return 0;
        int buyAt = prices[0];
        int profit = INT_MIN; 

        for(int i=1; i<prices.size(); i++){
            buyAt = min(buyAt , prices[i]);
            profit = max(profit , prices[i] - buyAt);
        }
        return profit;
    }
};