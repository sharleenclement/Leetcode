class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i, j, n = numRows;
        vector<vector<int>> vec;
        for(i=0;i<n;++i)
        {
            vector<int> v;
            for(j=0;j<=i;++j)
            {
                if(j==i or j==0)
                v.push_back(1);
                else if(j!=0 and j!=n-1)
                {
                    v.push_back(vec[i-1][j-1]+vec[i-1][j]);
                }
            }
            vec.push_back(v);
        }
        return vec;
    }
};