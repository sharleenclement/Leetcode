class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i, j;
        for(i=0;i<prices.size();++i)
        {
            for(j=i+1;j<prices.size();++j)
            {
                if(prices[j]<=prices[i])
                {
                    prices[i] = prices[i]-prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};