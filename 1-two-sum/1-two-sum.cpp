class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) 
        {
            int fnum = target - nums[i];
            if (mp.find(fnum) != mp.end()) 
            {
                return {mp[fnum], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};