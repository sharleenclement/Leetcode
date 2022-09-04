class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), c=1, ans, i;
        sort(nums.begin(), nums.end());
        
        if(n==1)
            return 1;
        
        for(i=0;i<n-1;++i) 
        {
            if(nums[i]==nums[i+1])
                c++;
            else
            {
                if(c>n/2)
                    return nums[i-1];
                else
                    c = 1;
            }
        }
        
        if(c>n/2)
            return nums[i-1];
        
        return -1;
    }
};