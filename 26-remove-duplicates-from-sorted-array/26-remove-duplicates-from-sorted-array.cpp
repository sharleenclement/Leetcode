class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, n = nums.size(), k = n;
        
        if(n==1)
            return n;
        
        for(i=0;i<n-1;++i)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i] = INT_MIN;
                k--;
            }
        }
        
        sort(nums.begin(), nums.end(), greater<>());
        sort(nums.begin(), nums.end()-(n-k));
        
        return k;
    }
};