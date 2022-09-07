class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r, ans = INT_MIN, n = s.length();
        if(n==0 or n==1)
            return n;
        unordered_set<int> st;
        for(r=0;r<n;++r)
        {
            if(st.find(s[r])!=st.end())
            {
                while(l<r && st.find(s[r])!=st.end())
                {
                    st.erase(s[l]);
                    l++;
                }    
            }
            st.insert(s[r]);
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};