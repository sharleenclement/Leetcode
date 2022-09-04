class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), c=0, ans, i;
        map<int, int> mp;
        
        for(i=0;i<n;++i)
        {
            if(mp.find(nums[i])==mp.end())
                mp[nums[i]] = 1;
            else
                mp[nums[i]]++;
        }
        
        for(auto& i: mp)
        {
            if(i.second > n/2)
                return i.first;
        }
        
        return -1;
    }
};