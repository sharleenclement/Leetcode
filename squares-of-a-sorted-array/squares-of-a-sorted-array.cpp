class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        vector<int> sorted;
        for(i=0;i<nums.size();++i)
            nums[i] = nums[i]*nums[i];
        sort(nums.begin(), nums.end());
        for(i=0;i<nums.size();++i)
            sorted.push_back(nums[i]);
        return sorted;
    }
};