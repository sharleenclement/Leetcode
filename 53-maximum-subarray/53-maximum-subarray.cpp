class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, csum=0, maxi=INT_MIN, n = nums.size();
        int mini = *max_element(nums.begin(), nums.end());
        if(mini<0)
            return mini;
        for(i=0;i<n;++i)
        {
            csum += nums[i];
            if(csum<0)
                csum = 0;
            maxi = max(maxi, csum);
        }
        return maxi;
    }
};
