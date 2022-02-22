class Solution {
public:
    int romanToInt(string s)
    {
        int n = s.size();
        unordered_map<char, int> mapp;

        mapp.insert({'I', 1});
        mapp.insert({'V', 5});
        mapp.insert({'X', 10});
        mapp.insert({'L', 50});
        mapp.insert({'C', 100});
        mapp.insert({'D', 500});
        mapp.insert({'M', 1000});

        int ans = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if(s[i]=='V' and i>0 and s[i-1]=='I'){
                ans+=4;--i;}

            else if(s[i]=='X' and i>0 and s[i-1]=='I'){
                ans+=9;--i;}

            else if(s[i]=='L' and i>0 and s[i-1]=='X'){
                ans+=40;--i;}

            else if(s[i]=='C' and i>0 and s[i-1]=='X'){
                ans+=90;--i;}

            else if(s[i]=='D' and i>0 and s[i-1]=='C'){
                ans+=400;--i;}

            else if(s[i]=='M' and i>0 and s[i-1]=='C'){
                ans+=900; --i;}

            else
                ans += mapp[s[i]];
        }

        return ans;
    }
};