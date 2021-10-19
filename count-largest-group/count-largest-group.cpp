class Solution {
public:
    int countLargestGroup(int n) {
      map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int sum=0;
            int k = i;
            while(k)
            {
              int d=k%10;
                sum+=d;
                k=k/10;
            }
            mp[sum]++;
        }
        vector<int>v;
        for(auto x:mp)
        {
            v.push_back(x.second);
        }
        int mx=*max_element(v.begin(),v.end());
        int count=0;
        for(auto k:mp)
        {
            if(mx==k.second)
                count++;
        }
        return count;
    }
};