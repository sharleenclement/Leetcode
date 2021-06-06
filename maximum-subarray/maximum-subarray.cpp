class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, j, sum=0, maxi=INT_MIN;
        for(i=0;i<nums.size();++i)
        {
            sum=0;
            for(j=i;j<nums.size();++j)
            {
                sum += nums[j];
                if(sum>maxi)
                    maxi = sum;
                // cout << sum << endl;
            }
        }
        return maxi;
    }
};