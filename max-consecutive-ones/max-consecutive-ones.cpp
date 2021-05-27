class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, maxi=INT_MIN, i;
        for(i=0;i<nums.size();++i)
        {
            if(nums[i]==1)
                c++;
            else if(nums[i]==0)
                c=0;
            if(c>maxi)
                maxi = c;
        }
        return maxi;
    }
};