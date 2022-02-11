class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, c=0;
        vector<int> v;
        for(i=0;i<nums.size();++i)
        {
            for(j=0;j<nums.size();++j)
            {
                if((i!=j) && (nums[i]+nums[j]==target))
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