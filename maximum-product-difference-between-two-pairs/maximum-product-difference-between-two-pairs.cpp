class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a, b, c, d, n, ans;
        n = nums.size();
        a = nums[0];
        b = nums[1];
        c = nums[n-1];
        d = nums[n-2];
        ans = (c*d) - (a*b);
        return ans;
    }
};