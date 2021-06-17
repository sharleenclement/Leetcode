class Solution {
public:
    int secondHighest(string s) {
        vector<char> v;
        int a, i, arr[10]={0}, c=0;
        for(i=0;i<s.length();++i)
        {
            a = (int)s[i];
            if(a>=48 && a<=57)
                v.push_back(s[i]);
        }
        for(i=0;i<v.size();++i)
        {
            arr[v[i]-'0']++;
        }
        for(i=9;i>=0;--i)
        {
            if(c==1 && arr[i]>=1)
                return i;
            if(arr[i]>=1)
                c++;
        }
        return -1;
    }
};