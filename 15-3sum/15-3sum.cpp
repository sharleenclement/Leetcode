class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j, k, n = nums.size();
        vector<vector<int>> vec;
        sort(nums.begin(), nums.end());
        
        for(i=0;i<n-2;++i)
        {
            if(i==0 or (i>0 && nums[i]!=nums[i-1]))
            {
                int l = i+1, h = n-1, sum = 0-nums[i];
                while(l<h)
                {
                    vector<int> v;
                    if(nums[l]+nums[h]==sum)
                    {
                        v.push_back(nums[i]);
                        v.push_back(nums[l]);
                        v.push_back(nums[h]);
                        vec.push_back(v);
                        while (l < h && nums[l] == nums[l+1]) l++;
                        while (l < h && nums[h] == nums[h-1]) h--;
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]<sum)
                        l++;
                    else
                        h--;
                }
            }
            
        }
        
        return vec;
    }
};