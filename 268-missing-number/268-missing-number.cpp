class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i, n = nums.size();
        vector<int> vec;
        for(i=0;i<=n;++i)
        {
            vec.push_back(i);
        }
        for(i=0;i<n;++i)
        {
            if(vec[i]!=nums[i])
                break;
        }
        return vec[i];
    }
};