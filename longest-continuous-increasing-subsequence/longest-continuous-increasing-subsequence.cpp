class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i, j, c=0, k=0, maxi=INT_MIN;
        for(i=0;i<nums.size();++i)
        {
            k = i;
            c=1;
            for(j=i+1;j<nums.size();++j)
            {
                if(nums[k]<nums[j] && abs(k-j)==1)
                {
                    // cout << nums[k] << " " << nums[j] << endl;
                    k = j;
                    c++;
                    // cout << c << endl;
                }
            }
            maxi = max(maxi, c);
        }
        // if(maxi==0)
            // return 1;
        return maxi;
    }
};