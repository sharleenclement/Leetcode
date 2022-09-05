class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, n = nums.size(), c=0;
        vector<int> v;
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                if(i!=j and nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }
        return v;
    }
};