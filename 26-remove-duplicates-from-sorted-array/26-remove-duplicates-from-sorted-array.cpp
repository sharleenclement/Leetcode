class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, n = nums.size(), k = 0;
        vector<int> v;
        
        if(n==1)
            return n;
        
        for(i=0;i<n-1;++i)
        {
            if(nums[i]!=nums[i+1])
            {
                v.push_back(nums[i]);
                k++;
            }
        }
        
        v.push_back(nums[i]);
        k++;
        
        for(i=0;i<k;++i)
            nums[i] = v[i];
        
        return k;
    }
};