class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        if(n==0 or n==1)
            return n;
        
        sort(nums.begin(), nums.end());
        vector<int> dis;
        int i, c=0, ans=0; 
        dis.push_back(nums[0]);
        
        for(i=1;i<n;++i)
        {
            if(nums[i-1]!=nums[i])
            {
                dis.push_back(nums[i]);
            }
        }
        
        for(i=0;i<dis.size();++i)
        {
            if(i>0 && dis[i-1]+1==dis[i])
            {
                c++;
            }
            else
                c = 1;
            
            ans = max(ans, c);
        }
        
        return ans;
    }
};
