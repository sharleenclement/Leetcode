class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i, a, c=0;
        for(i=0;i<nums.size();++i)
        {
            a = log10(nums[i])+1;
            if(a%2==0)
                c++;
        }
        return c;
    }
};