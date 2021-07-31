class Solution {
public:
    vector<vector<int>> generate(int n) {
        int i, j, k=0;
        vector<vector<int>> x;
        for(i=1;i<=n;++i)
        {
            k = 1;
            vector<int> v;
            for(j=1;j<=i;++j)
            {
                v.push_back(k);
                k = k * (i-j)/j;
            }
            x.push_back(v);
        }
        return x;
    }
};