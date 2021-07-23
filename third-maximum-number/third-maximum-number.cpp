class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long maxi = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;
        int i, n = nums.size();
        for(i=0;i<n;++i)
        {
            if (nums[i] == maxi || nums[i] == secondMax || nums[i] == thirdMax)
		    continue;
            if(nums[i]>=maxi)
            {
                thirdMax = secondMax;
                secondMax = maxi;
                maxi = nums[i];
            }
            else if(nums[i]>=secondMax)
            {
                thirdMax = secondMax;
                secondMax = nums[i];
            }
            else if(nums[i]>=thirdMax)
            {
                thirdMax = nums[i];
            }
        }
        if (thirdMax != LONG_MIN)
            return (int)thirdMax;
        else if (maxi != LONG_MIN)
            return (int)maxi;
        else
            return (int)secondMax;
    }
};