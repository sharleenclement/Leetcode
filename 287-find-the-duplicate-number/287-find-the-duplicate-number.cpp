class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int index, i;
        
        for(i=0;i<nums.size();++i)
        {
            index = abs(nums[i]) - 1;
            if(nums[index]>0)
                nums[index] *= -1;
            else
                return abs(nums[i]);
        }
        
        return -1;
    }
};