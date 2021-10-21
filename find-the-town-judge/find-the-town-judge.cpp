class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       map<int,int>mp;
        map<int,int>mp1;
        if(trust.size()==0 && n==1)
            return 1;
        if(n==1 || trust.size()==0)
            return -1;
        for(int i=0;i<trust.size();i++)
        {
            mp.insert({trust[i][0],trust[i][1]});
            mp1[trust[i][1]]++;
        }
        vector<int>v;
        for(auto i:mp1)
        {
          v.push_back(i.second);  
        }
        int mx=*max_element(v.begin(),v.end());
        if(mx!=n-1)
            return -1;
        int k;
        for(auto i:mp1)
        {
            if(i.second==mx)
               k=i.first; 
        }
        for(auto i:mp)
        {
          if(i.first==k)
              return -1;
        }
        return k;
    }
};