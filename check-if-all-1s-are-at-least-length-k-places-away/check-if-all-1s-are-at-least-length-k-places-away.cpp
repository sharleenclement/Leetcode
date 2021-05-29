class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i, c=0, d=0;
        for(i=0;i<nums.size();++i)
        {
            // cout << d << endl;
            if(nums[i]==1 && d<k && c>0)
            {
                return false;
            }
            if(nums[i]==1)
            {
                c++;
                d=0;
            }
            else 
                d++;
                
        }
        return true;
    }
};