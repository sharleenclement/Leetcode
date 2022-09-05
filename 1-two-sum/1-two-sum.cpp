class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, n = nums.size();
        vector<int> v;
        unordered_map<int, int> mp;
        for(i=0;i<n;++i)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            mp[nums[i]] = i;
        }
        return v;
    }
};