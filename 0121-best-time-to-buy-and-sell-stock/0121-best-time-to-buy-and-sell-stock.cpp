class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit=0;
        int stock=prices[0];
        
        for(int i=1;i<n;i++){
          stock=min(stock,prices[i]);
          profit=max(profit,prices[i]-stock);
        }
        return profit;
    }
};