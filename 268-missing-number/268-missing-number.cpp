class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i, n = nums.size();

        for(i=0;i<n;++i)
        {
            if(i!=nums[i])
                break;
        }
        return i;
    }
};