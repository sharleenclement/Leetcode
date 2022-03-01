class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, n = nums.size(), k = 0;
        
        if(n==1)
            return n;
        
        for(i=0;i<n-1;++i)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[k++] = nums[i];
            }
        }
        
        nums[k++] = nums[n-1];
        return k;
    }
};