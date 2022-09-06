class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i, j, ans = INT_MIN, n = s.length();
        if(n==0 or n==1)
            return n;
        for(i=0;i<n;++i)
        {
            unordered_set<int> st;
            for(j=i;j<n;++j)
            {
                if(st.find(s[j])!=st.end())
                {
                    ans = max(ans, j-i);
                    break;
                }
                st.insert(s[j]);
                if(j==n-1)
                    ans = max(ans, j-i+1);
            }
        }
        return ans;
    }
};