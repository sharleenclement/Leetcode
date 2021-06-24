class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, n=0;
        for(i=0;i<nums.size();++i)
        {
            n ^= nums[i];
        }
        return n;
    }
};