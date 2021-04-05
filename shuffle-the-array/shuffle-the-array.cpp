class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i, j;
        vector<int> k;
        for(i=0, j=n;i<n, j<n*2;++i, ++j)
        {
            k.push_back(nums[i]);
            k.push_back(nums[j]);
        }
        return k;
    }
};