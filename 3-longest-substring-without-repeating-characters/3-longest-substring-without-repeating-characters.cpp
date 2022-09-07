class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r, ans = INT_MIN, n = s.length();
        if(n==0 or n==1)
            return n;
        vector<int> v(256, -1);
        
        for(r=0;r<n;++r)
        {
            if(v[s[r]]!=-1)
            {
                l = max(v[s[r]]+1, l);
            }
            
            v[s[r]] = r;
            ans = max(ans, r-l+1);
        }
        
        return ans;
    }
};