class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int i, j;
        for(i=0;i<nums.size();i+=2)
        {
            for(j=0;j<nums[i];++j)
            {
                v.push_back(nums[i+1]);
            }
        }
        return v;
    }
};