class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, n = prices.size(), profit=0, i;
        
        for(i=0;i<n;++i)
        {
            if(prices[i]<mini)
                mini = prices[i];
            
            profit = max(profit, prices[i]-mini);
        }
        
        return profit;
    }
};