class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        multimap<int,int>mp;
        map<int,int>mp2;
        int k=n-1;
        int y=0;
        if(n==1)
            return 1;
        for(int i=0;i<trust.size();i++)
        {
            mp.insert({trust[i][0],trust[i][1]});
        }
        for(auto j:mp)
        {
            // cout << "j " << j.first << " " << j.second << endl;
            mp2[j.second]++;
        }
        for(auto x:mp2)
        {
            // cout << "x " << x.first << " "  << x.second << endl;
            if(x.second==k)
              y=x.first;  
        }
        if(y==0)
            return -1;
        int c=0;
        for(int i=1;i<=n;++i)
        {
            // cout << mp.count(i) << endl;
            if(mp.count(i)>0)
                c++;
        }
        // cout << c << "  fin " << n << endl;
        if(c==n)
            return -1;
        for(auto itr:mp)
        {
            if(mp.count(y)==1)
               return -1;
        }
        return y;
    }
};