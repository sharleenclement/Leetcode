class Solution {
public:    
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 0);
        dp[0] = 1;
        int i, j;
        
        for(i=0;i<m;++i)
        {
            for(j=1;j<n;++j)
            {
                dp[j] += dp[j-1];
            }
        }
        
        return dp[n-1];
    }
};