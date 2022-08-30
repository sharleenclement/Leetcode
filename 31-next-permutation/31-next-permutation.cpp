class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, id1, id2, n = nums.size();
        for(i=n-2;i>=0;--i)
        {
            if(nums[i]<nums[i+1])
            {
                id1 = i; 
                break;
            }
        }
        if(i<0)
            reverse(nums.begin(), nums.end());
        else
        {
            for(i=n-1;i>=0;--i)
            {
                if(nums[i]>nums[id1])
                {
                    id2 = i;
                    swap(nums[i], nums[id1]);
                    break;
                }
            }
            reverse(nums.begin()+id1+1, nums.end());
        }
        
    }
};