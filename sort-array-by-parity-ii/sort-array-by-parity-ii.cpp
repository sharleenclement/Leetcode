class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v;
        int i, k1=0, k2=0;
        for(i=0;i<nums.size();++i)
        {
            if(nums[i]%2==0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        for(i=0;i<nums.size();++i)
        {
            if(i%2==0)
            {
                v.push_back(v1[k1]);
                k1++;
            }
            else
            {
                v.push_back(v2[k2]);
                k2++;
            }
        }
        return v;
    }
};