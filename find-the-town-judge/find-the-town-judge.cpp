class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v1(n, 0);
        vector<int> v2(n, 0);
        int i;
        for(i=0;i<trust.size();++i)
        {
            v1[trust[i][0]-1]++;
            v2[trust[i][1]-1]++;
        }
        int maxi = *max_element(v2.begin(), v2.end());
        if(maxi!=(n-1))
            return -1;
        for(i=0;i<n;++i)
        {
            if(v1[i]==0)
                return i+1;
        }
        return -1;
    }
};