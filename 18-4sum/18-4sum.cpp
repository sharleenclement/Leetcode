class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i, j, k, n = nums.size(), left, right;
        vector<vector<int>> vec;
        
        if(n==0)
            return vec;
        
        long target1 = 0, target2 = 0, fin = 0;
        sort(nums.begin(), nums.end());
        
        for(i=0;i<n;++i)
        {
            target1 = target - nums[i];
            for(j=i+1;j<n;++j)
            {
                target2 = target1 - nums[j];
                left=j+1, right=n-1;
                while(left<right)
                {
                    fin = (long)nums[left] + (long)nums[right];
                    if(fin<target2)
                        left++; 
                    else if(fin>target2)
                        right--; 
                    else
                    {
                        vector<int> v(4, 0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[left];
                        v[3] = nums[right];
                        vec.push_back(v);
                        
                        while(left<right && nums[left]==v[2]) 
                            ++left;
                        
                        while(left<right && nums[right]==v[3]) 
                            --right;

                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) 
                    ++j;
            }
            while(i+1<n && nums[i+1]==nums[i]) 
                ++i;
        }
    
        return vec;
    }
};