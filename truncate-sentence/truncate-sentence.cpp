class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int c = 0, i;
        for(i=0;i<n;++i)
        {
            if(c==k)
            {
                s.resize(i-1);
                break;
            }
            if(s[i]==' ')
            {
                c++;
                
            }
        }
        return s;
    }
};