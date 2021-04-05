class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count;
        int i, j, c=0;
        for(i=0;i<nums.size();++i)
        {
            for(j=0;j<nums.size();++j)
            {
                if(nums[i]>nums[j])
                    c++;
            }
            count.push_back(c);
            c=0;
        }
        return count;
    }
};