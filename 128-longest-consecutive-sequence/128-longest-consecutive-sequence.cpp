class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        if(n==0)
            return 0;
        
        sort(nums.begin(), nums.end());
        int ans = 1, prev = nums[0], c = 1, i; 
        
        for(i=1;i<n;++i)
        {
            if(nums[i]==prev+1)
                c++;
            else if(nums[i]!=prev) // same elements are counted as a part of the sequence
                c=1;
            
            prev = nums[i];
            ans = max(ans, c);
        }
        
        return ans;
    }
};
