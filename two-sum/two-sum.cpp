class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, n;
        vector<int> v;
        n = nums.size();
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if((nums[i]+nums[j])==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};