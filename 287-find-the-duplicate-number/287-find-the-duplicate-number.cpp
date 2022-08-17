class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i, j, n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        
        int freq[100005]={0};
        
        for(i=0;i<n;++i)
            freq[nums[i]]++;
        
        for(i=0;i<=maxi;++i)
        {
            if(freq[i]>1)
                return i;
        }
        
        return 0;
    }
};