class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i, n, sum=0;
        n = nums.size();
        vector<int> runs;
        for(i=0;i<n;++i)
        {
            sum += nums[i];
            runs.push_back(sum);
        }
        return runs;
    }
};