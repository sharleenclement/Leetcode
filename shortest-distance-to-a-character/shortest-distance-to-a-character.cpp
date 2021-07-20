class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n, i, j, k, ans, ans1, ans2;
        n = s.length();
        vector<int> v;
        for(i=0;i<n;++i)
        {
            ans1 = INT_MAX;
            ans2 = INT_MAX;
            if(s[i]!=c)
            {
                for(j=i+1;j<n;++j)
                {
                    if(s[j]==c)
                    {
                        ans1 = abs(j-i);
                        break;
                    }
                }
                if(i!=0)
                {
                    for(k=i-1;k>=0;k--)
                    {
                        if(s[k]==c)
                        {
                            ans2 = abs(k-i);
                            break;
                        }
                    }
                }
                ans = min(ans1, ans2);
                v.push_back(ans);
            }
            else
            v.push_back(0);
        }
        return v;
    }
};