class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        if(n==0 or n==1)
            return n;
        
        set<int> s;
        int c=1, ans=0, currentval;
        for(int i: nums)
        {
            s.insert(i);
        }
        
        for(int i: nums)
        {
            if(!s.count(i-1)) // checking if the prev element is present
            {
                currentval = i;
                c = 1;
                
                while(s.count(currentval+1)) // checking if the next element is present
                {
                    currentval += 1;
                    c++;
                }
            }
            
            ans = max(ans, c);
        }
        
        return ans;
    }
};
