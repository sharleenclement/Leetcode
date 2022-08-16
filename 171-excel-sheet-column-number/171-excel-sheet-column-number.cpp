class Solution {
public:
    int titleToNumber(string s) {
        int ans, i, d, fin=0;
        int n = s.length();
        n-=1;
        for(i=0;s[i]!='\0';++i)
        {
            ans = s[i] - 64;
            fin += ans*pow(26, n);
            n--;
        }
        
        return fin;
    }
};
// 