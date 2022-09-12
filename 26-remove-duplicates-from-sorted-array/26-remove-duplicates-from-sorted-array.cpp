class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j=0, n = nums.size();
        
        for(i=1;i<n;++i)
        {
            if(nums[j]!=nums[i])
            {
                j++;
                nums[j] = nums[i];    
            }
        }
        
        return j+1;
    }
};