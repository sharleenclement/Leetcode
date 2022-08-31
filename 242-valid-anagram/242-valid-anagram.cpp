class Solution {
public:
    bool isAnagram(string s, string t) {        
        int freq1[27]={0}, freq2[27]={0}, i, n=s.length(), m=t.length();
        
        if(n!=m)
            return false;
        
        for(i=0;i<n;++i)
            freq1[s[i]-'a']++;
        
        for(i=0;i<m;++i)
            freq2[t[i]-'a']++;
        
        for(i=0;i<27;++i)
        {
            if(freq1[i]!=freq2[i])
                return false;
        }
        
        return true;
    }
};