class Solution {
public:
    int trap(vector<int>& height) {
        int maxi = INT_MIN, i, var, ans=0;
        int n = height.size();
        // cout << n << endl;
        int dp1[100000]={0};
        int dp2[100000]={0};
        
        for(i=0;i<n;++i)
        {
            maxi = max(maxi, height[i]);
            dp1[i] = maxi;
        }
        maxi = INT_MIN;
        for(i=n-1;i>=0;--i)
        {
            maxi = max(maxi, height[i]);
            dp2[i] = maxi;
        }
        
        for(i=1;i<n;++i)
        {
            var = min(dp1[i-1], dp2[i+1]);
            ans += var>height[i]?var-height[i]:0;
        }
        
        return ans;
    }
};