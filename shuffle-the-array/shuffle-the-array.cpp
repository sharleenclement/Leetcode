class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i;
        vector<int> v;
        for(i=0;i<n;++i)
        {
            v.push_back(nums[i]);
            v.push_back(nums[n+i]);
        }
        return v;
    }
};