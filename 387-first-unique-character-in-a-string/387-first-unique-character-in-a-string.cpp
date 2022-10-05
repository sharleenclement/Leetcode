class Solution {
public:
    int firstUniqChar(string s) {
        int i, j, n = s.length(), k=0;
        for(i=0;i<n;++i)
        {
            k=0;
            if(s[i]==-1)
                continue;
            for(j=i+1;j<n;++j)
            {
                if(s[j]!=-1 and s[i]==s[j])
                {
                    k = -1;
                    s[j] = -1;
                }
            }
            if(k==0)
                return i;
        }
        return -1;
    }
};